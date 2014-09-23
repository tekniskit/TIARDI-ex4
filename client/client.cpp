// client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Reactor reactor; 

	Connector<HandlerFunction ,Addrs> connector(&reactor);

	


	connector.Connect(ConnectedFunction, )


	return 0;
}

void ConnectedFunction(SOCK_STREAM stream)
{



}

