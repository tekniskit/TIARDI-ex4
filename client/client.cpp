// client.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>

#include "stdafx.h"
#include "Controller.h"


using namespace std;

Controller controller; 

void ConnectedFunction(Handle* stream)
{
	controller.ConnectedFunction(stream);
}


int _tmain(int argc, _TCHAR* argv[])
{	
	Reactor reactor; 
	
	INET_Addr addr(5000, inet_addr("127.0.0.1"));

	Connector connector(&reactor);
	connector.Connect(ConnectedFunction, addr);
	Controller controller = Controller(&reactor);

	while (true)
	{
		reactor.handleEvents(); 
	}


	return 0;
}

