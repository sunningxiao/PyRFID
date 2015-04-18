#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "./lib/ltkcpp.h"
#include "./lib/impinj_ltkcpp.h"


class CMyApplication
{
private:

	unsigned int m_modelNumber;
    unsigned int m_messageID;
	
  public:
    /** Verbose level, incremented by each -v on command line */
    int                         m_Verbose;
	char						rptBuf[128*20];
    /** Connection to the LLRP reader */
	LLRP::CConnection *               m_pConnectionToReader;
	LLRP::CTypeRegistry *				pTypeRegistry;
    inline
    CMyApplication (void)
     : m_Verbose(0), m_pConnectionToReader(NULL), pTypeRegistry(NULL)
    {
        m_messageID = 0;
    }

    int
    run (
      char *                    pReaderHostName);

	int
	connect(
	  char *					pReaderHostName);
	int
	close(void);

	int report(void);

    int
    checkConnectionStatus (void);

    int
    enableImpinjExtensions (void);

    int
    resetConfigurationToFactoryDefaults (void);

    int 
    getReaderCapabilities(void);

    int
    setImpinjReaderConfig(void);

    int
    addROSpec (void);

    int
    enableROSpec (void);

    int
    startROSpec (void);

    int
    stopROSpec (void);

    int
    awaitAndPrintReport (int timeoutSec);

    void
    printTagReportData (
      LLRP::CRO_ACCESS_REPORT *       pRO_ACCESS_REPORT);

    void
    printImpinjTagInformation (
      LLRP::CImpinjTagInformation *   pImpinjTagInformation);
      

    void
    printOneTagReportData (
      LLRP::CTagReportData *          pTagReportData,
	  char * ptr);

    int
    formatOneEPC (
      LLRP::CParameter *          pEpcParameter,
      char *                buf,
      int                   buflen,
      char *                startStr);

    int getOnePhaseAngle(
      LLRP::CImpinjRFPhaseAngle  *pRfPhase,
      unsigned int               *out);

    int
    getOnePeakRSSI (
      LLRP::CImpinjPeakRSSI      *pPeakRSSI,
      unsigned int               *out);

    int
    getOneTimestamp (
      LLRP::CParameter           *pTimestamp,
      unsigned long long   *out);

    int
    getOneAntenna (
      LLRP::CAntennaID           *pAntenna,
      unsigned short       *out);

    int
    getOneChannelIndex (
      LLRP::CChannelIndex        *pChannelIndex,
      unsigned short       *out);

    int 
    estimateVelocity(
      char *                epcStr,
      double                rssi, 
      double                phase, 
      unsigned short        channelIndex, 
      unsigned short        antenna, 
      unsigned long long    time, 
      double                *outVelocity);

    void
    handleReaderEventNotification (
      LLRP::CReaderEventNotificationData *pNtfData);

    void
    handleAntennaEvent (
      LLRP::CAntennaEvent *           pAntennaEvent);

    void
    handleReaderExceptionEvent (
      LLRP::CReaderExceptionEvent *   pReaderExceptionEvent);

    int
    checkLLRPStatus (
      LLRP::CLLRPStatus *             pLLRPStatus,
      char *                    pWhatStr);

	LLRP::CMessage *
    transact (
      LLRP::CMessage *                pSendMsg);

	LLRP::CMessage *
    recvMessage (
      int                       nMaxMS);

    int
    sendMessage (
      LLRP::CMessage *                pSendMsg);

    void
    printXMLMessage (
      LLRP::CMessage *                pMessage);
};
