#!/home/ningxiao/Enthought/Canopy_32bit/User/bin/python
#coding=utf-8

#author:ningxiao
#target: connect Impinj reader to get the tag's RSS and phase

import Impinj
import numpy as np
import matplotlib.pyplot as plt

impinj=Impinj.CMyApplication()
impinj.m_Verbose = 0
impinj.connect("10.104.8.108")

impinj.checkConnectionStatus()
impinj.enableImpinjExtensions()
impinj.resetConfigurationToFactoryDefaults()
impinj.getReaderCapabilities()
impinj.setImpinjReaderConfig()
impinj.addROSpec()
impinj.enableROSpec()
impinj.startROSpec()
#impinj.awaitAndPrintReport(10)
i=50
while(i>0):
	impinj.report()
	print(impinj.rptBuf)
	i=i-1

impinj.stopROSpec()
impinj.close()
