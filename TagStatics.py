#!/home/ningxiao/Enthought/Canopy_32bit/User/bin/python
#-*-coding:utf-8-*-
###############################################
#Author: Ningxiao
#Date: Apr.19
#
#Drawing the diagram of the tags' phase and RSS
#
#
################################################

import CTag
import sys
import os
import matplotlib.mlab as mlab
import matplotlib.pyplot as plt
import numpy as np

dsys = CTag.DectTags()
dsys.config()

try:
	cnt = int(raw_input("Please enter a number\n"))
except StandardError,e:
	print "Number!!"
	sys.exit()

while(cnt):
	dsys.getone()
	dsys.showTags()
	print cnt
	cnt -= 1

dsys.close()

#是否绘制波形图
if (raw_input("Do you want to draw the diagram?(y/n)\n") !='y'):
	sys.exit()

#标签选择########
NNID = int(raw_input("How many tags do you have?\n"))
if (NNID<=0):
	sys.exit() 
NID =0
#是否保存波形图及原始数据
if (raw_input("Do you want to save the diagram and data\n") =='y'):
	bsav = True
else:
	bsav = False

cstr = raw_input("Write down your comment\n")
path ="/home/ningxiao/project/impinj/data/"

#创建文件夹
try:
	NDIR = "%s%s/"%(path,cstr)
	os.mkdir(NDIR)
except StandardError,e:
	print "Can't create dictory"
	sys.exit()

while (NID < NNID):
	#获取天线工作状态
	CANT = dsys.getWorkingANT(NID)
	#获取工作天线数量
	NANT = np.sum(CANT)
	#获取EPC
	EPC = dsys.showInfo(NID,"EPC")
	APH = dsys.showInfo(NID,"APH")
	ARS = dsys.showInfo(NID,"ARS")
	
	#存储数据
	np.savetxt('%sAPH_%d_%s'%(NDIR,NID,EPC),APH)
	np.savetxt('%sARS_%d_%s'%(NDIR,NID,EPC),ARS)


	#print ARS
	print "There are %d antennas working " %NANT
	print "The diagram is for %s " %EPC
	plt.figure(NID,figsize=(20,10))
	plt.suptitle("EPC:%s"%EPC,fontsize=18)
	nrow=NANT
	#三列图形：原始相位图，整理后相位图，回波信号强度图
	ncol=3
	cnt =0
	cntplot = 0
	while(cnt<CTag.Num_ANT):
		print cnt
		if (~CANT[cnt]):
			print "continue"
			cnt +=1
			continue
	
		#原始相位图
		print "printing NID:%d digram 1" %NID
		subplt1 = plt.subplot(nrow,ncol,cntplot*ncol+1)
		subplt1.hist(APH[cnt],bins=256,range=(0,4095))
		subplt1.grid(True)
		subplt1.set_title("Original Phase")
	
		#修改相位图
		print "printing NID:%d digram 2" %NID
		subplt2 = plt.subplot(nrow,ncol,cntplot*ncol+2)
		CAPH = APH[cnt]%2048
		CAPH_MEAN = CAPH.mean()
		CAPH_VAR =  CAPH.var()
		subplt2.hist(CAPH,bins=256,range=(int(CAPH_MEAN-128),int(CAPH_MEAN+128)))
		subplt2.grid(True)
		subplt2.set_title("PH_Mean=%.2f, PH_Var=%.2f"%(CAPH_MEAN,CAPH_VAR))
	
		#回波信号强度
		print "printing NID:%d digram 3" %NID
		subplt3 = plt.subplot(nrow,ncol,cntplot*ncol+3)
		ARS_MEAN = ARS[cnt].mean()
		ARS_VAR  = ARS[cnt].var()
		subplt3.hist(ARS[cnt],bins=20,range=(int(ARS_MEAN)-10,int(ARS_MEAN)+10))
		subplt3.grid(True)
		subplt3.set_title("RS_Mean=%.2f, RS_Var=%.2f"%(ARS_MEAN,ARS_VAR))
		cntplot +=1
		cnt +=1
	plt.savefig("%s%d_%s"%(NDIR,NID,EPC))
	NID += 1

plt.show()



