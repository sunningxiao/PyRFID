#_Impinj.so: Impinj_wrap.cxx impinj_tmp.o
#	g++ -m32 -fPIC -I /extdisk/opt/Canopy32/appdata/canopy-1.5.2.2785.rh5-x86/include/python2.7/ -shared -o _Impinj.so Impinj_wrap.cxx impinj_tmp.o 

#impinj_tmp.o: impinj_t1.o
#	g++ -m32 -I./lib/ -o impinj_tmp.o impinj_t1.o ./lib/libltkcpp_x86.a ./lib/libltkcppimpinj_x86.a ./lib/libxml2_x86.a

_Impinj.so: Impinj_wrap.cxx impinj_t1.o
	g++ -m32 -fPIC -I./lib/ -I/extdisk/opt/Canopy32/appdata/canopy-1.5.2.2785.rh5-x86/include/python2.7 -shared -o _Impinj.so Impinj_wrap.cxx impinj_t1.o ./lib/libltkcpp_x86.a ./lib/libltkcppimpinj_x86.a ./lib/libxml2_x86.a

impinj_t1.o: impinj_t1.cpp impinj_t1.h 
	g++ -g -m32 -I./lib/ -c impinj_t1.cpp -o impinj_t1.o

Impinj_wrap.cxx: impinj_t1.h Impinj.i
	swig -c++ -python Impinj.i

clean:
	rm *.o *.cxx *.pyc Impinj.py _Impinj.so
