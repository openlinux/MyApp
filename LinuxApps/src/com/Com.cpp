
#include "../../inc/typedefs.h"
#include "../../inc/includes.h"

#include "Com.h"
using namespace std;

Com::Com()
{
	//m_iComPort =-1;
	//m_bComConnect = FALSE;
	//pthread_mutex_init(&m_mutexIOSignal,NULL);
	//memset(m_szComBuf,0,sizeof(m_szComBuf));
	
	cout<<"I am in com constructor !"<<endl;
	
}

Com::~ Com()
{
	
	cout<<"I am in destructor !"<<endl;
}

int  Com::Init()
{

	cout<<"in init "<<endl;

/*

	if(!ComOpen())
	{
		printf("Open com failed !");
		return -1;
	}
	if(pthread_create(&m_pthreadRecv,NULL,ThreadComRecv,NULL) !=0 || 
	    pthread_create(&m_pthreadSend,NULL,ThreadComSend,NULL !=0)
		{
			ComClose();
			printf("Create Thread failed !");
			return -1;
		}
		*/
	return 0;
	
}
/*
int Com::Release()
{
	ComClose();
	pthread_mutex_destroy(&m_mutexIOSignal);
	return 0;
}

bool	Com::ComOpen()
{
	m_iComPort = open("/dev/ttyS0",O_RDWR);
	if(-1 == m_iComPort)
		{
			printf("can't open dev/ttyS0");
			return false;
		}
	return true;
}


bool Com::ComClose()
{
	if(m_iComPort  != -1)
		{
			close(m_iComPort);
			m_iComPort =-1;
			return true;
		}
	return false;
}
int 	Com::ComRead()
{
	return 0;
}
int 	Com::ComWrite()
{
	return 0;
}

void Com::setComPara()
{
	return 0;
}



*/
























