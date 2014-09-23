#pragma once 
#include "IConnector.h"
#include "IReactor.h"
#include "SOCK_Connector.h"

template < class SERVICE_HANDLER, class ICONNECTOR>
class Connector : IConnector<SERVICE_HANDLER, ICONNECTOR>
{

public:
	Connector(IReactor *reactor_) 
	{
		reactor = reactor_; 
	}

	~Connector() 
	{
	}

	void handleEvent(Handle* handle)
	{

	}

	void Connect(SERVICE_HANDLER* SH, const ICONNECTOR)
	{
		
	}

private:
	SOCK_Connector sock_connector;
	IReactor * reactor =  nullptr; 
};


