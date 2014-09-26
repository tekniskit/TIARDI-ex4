// client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Connector.h"
#include "Reactor.h"

void ConnectedFunction(Handle* stream)
{



}


int _tmain(int argc, _TCHAR* argv[])
{
	Reactor reactor; 
	INET_Addr addr(5000, inet_addr("127.0.0.1"));
	
	Connector connector(&reactor);
	connector.Connect(ConnectedFunction, addr);

	while (true)
	{
		reactor.handleEvents(); 
	}


	return 0;
}


