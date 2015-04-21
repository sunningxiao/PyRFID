#!/home/ningxiao/Enthought/Canopy_32bit/User/bin/python
#-*-coding:utf-8-*-  
#########################################
#Author: Ningxiao
#Date: Apr.17
#
#Here are two classes: Tags & DectTags
#class Tags:
#	getValue(str)	#将str信息添加至此类
#	getEPC()		#获取EPC
#	getAPH()		#获取相位信息
#	getARS()		#获取回波强度信息
#	getATM()		#获取时间信息
#	getCANT()		#获取各天线已探测标签数量
#	check(str)		#检测输入数据是否属于此类，若属于将新信息添加至该类
#
#class DectTags:
#	config()		#建立连接并配置Reader
#	getone()		#获取一个标签信息
#	compare()		#比较新包是否属于已创建的tags类，若不属于创建新类
#	getLen()		#获取当前激活标签数量
#	showTags()		#显示当前标签基本信息
#	showInfo(NID,sel) #显示sel信息，NID为当前激活标签索引值，sel：EPC\APH\ARS\ATM\CANT
#	getWorkingANT(NID)#获取指定NID标签天线活动状态信息
#	close()			#关闭Reader
#
#########################################

import numpy as np
import re
import Impinj
Num_ANT = 4
Num_SAV = 100
class Tags(object):
	__EPC__="0000-0000-0000-0000-0000-0000-0000-0000"
	#每个天线当前存储数据量
	__CANT__ = np.zeros(Num_ANT)
	#相位信息 np.int32
	__APH__ = np.zeros((Num_ANT,Num_SAV),dtype=np.int32) 
	#回波信号强度信息 np.float32
	__ARS__ = np.zeros((Num_ANT,Num_SAV),dtype=np.int32)
	#时间信息 np.uint32
	__ATM__ = np.zeros((Num_ANT,Num_SAV),dtype=np.uint32)

	def __init__(self,str):
		#获取EPC值
		tmp=re.findall(r'epc=\S*',str)
		self.__EPC__=tmp[0]
		self.__CANT__ = np.zeros(Num_ANT)
		self.__APH__ = np.zeros((Num_ANT,Num_SAV),dtype=np.int32) 
		self.__ARS__ = np.zeros((Num_ANT,Num_SAV),dtype=np.int32)
		self.__ATM__ = np.zeros((Num_ANT,Num_SAV),dtype=np.uint32)
		self.getValue(str)
	
	def getValue(self,str):
		#获取天线ID
		tmp=re.findall(r'ant=\d*',str)
		aID=int(tmp[0][4])-1
		#获取当前存储数据量
		aNUM=self.__CANT__[aID]%Num_SAV
		#获取相位
		tmp=re.findall(r'ph=\S*',str)
		self.__APH__[aID][aNUM]=np.int32(tmp[0][3:])
		#获取回波强度
		tmp=re.findall(r'rs=\S*',str)
		self.__ARS__[aID][aNUM]=np.int32(tmp[0][3:])
		#获取时间信息
		tmp=re.findall(r'tm=\d*',str)
		self.__ATM__[aID][aNUM]=np.uint32(tmp[0][3:])
		#更新存储数据量
		self.__CANT__[aID] +=1
		return aNUM

	def getEPC(self):
		#print self.__EPC__
		return self.__EPC__
	def getAPH(self):
		return self.__APH__
	def getARS(self):
		return self.__ARS__
	def getATM(self):
		return self.__ATM__
	def getCANT(self):
		return self.__CANT__
	#检测新包是否属于此tag，属于：执行getValue将信息输入
	def check(self,str):
		tmp=re.findall(r'epc=\S*',str)
		if tmp == self.__EPC__:
			self.getValue(str)
			return True
		else:
			return False

class DectTags(object):
	__ACTAGS__=[]
	impinj=Impinj.CMyApplication()

	def __init__(self):
		pass

	def config(self):
		self.impinj.m_Verbose = 0
		self.impinj.connect("10.104.8.108")
		
		self.impinj.checkConnectionStatus()
		self.impinj.enableImpinjExtensions()
		self.impinj.resetConfigurationToFactoryDefaults()
		self.impinj.getReaderCapabilities()
		self.impinj.setImpinjReaderConfig()
		self.impinj.addROSpec()
		self.impinj.enableROSpec()
		self.impinj.startROSpec()

	def getone(self):
		self.impinj.report()
		print self.impinj.rptBuf
		self.compare()

	#比较新包是否属于创建tags类，若不属于创建新类
	def compare(self):
		tmp=re.findall(r'epc=\S*',self.impinj.rptBuf)
		cnt = len(self.__ACTAGS__)
		while(cnt):
			cnt = cnt -1
			if tmp[0] == self.__ACTAGS__[cnt].getEPC():
				self.__ACTAGS__[cnt].getValue(self.impinj.rptBuf)
				return True
		self.__ACTAGS__.append(Tags(self.impinj.rptBuf))
		return True
	#获取当前激活标签数量
	def getLen(self):
		return len(self.__ACTAGS__)

	def showTags(self):
		cnt = len(self.__ACTAGS__)
		print "The number of activy tags is %d" %(cnt)
		while(cnt):
			cnt = cnt - 1
			print "%s : %s" %(self.__ACTAGS__[cnt].getEPC(),self.__ACTAGS__[cnt].getCANT())
		return cnt
	#输出标签信息，NID为标签号码，sel：“EPC”、“APH”、“ARS”、“ATM”、“CANT”
	def showInfo(self,NID,sel):
		if NID >= len(self.__ACTAGS__):
			return none
		elif sel == "EPC" :
			return self.__ACTAGS__[NID].__EPC__
		elif sel == "APH":
			return self.__ACTAGS__[NID].__APH__
		elif sel == "ARS":
			return self.__ACTAGS__[NID].__ARS__
		elif sel == "ATM":
			return self.__ACTAGS__[NID].__ATM__
		elif sel == "CANT":
			return self.__ACTAGS__[NID].__CANT__
		else:
			return none
	#获取工作位置天线
	def getWorkingANT(self,NID):
		if NID >= len(self.__ACTAGS__):
			return none
		return self.__ACTAGS__[NID].getCANT()>0

	def close(self):
		self.impinj.stopROSpec();
		self.impinj.close();

if '__main__' == __name__:
	dsys=DectTags()
	dsys.config()
	cnt = 100
	while(cnt):
		dsys.getone()
		dsys.showTags()
		print cnt
		cnt=cnt -1
	dsys.close()

