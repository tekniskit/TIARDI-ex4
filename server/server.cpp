// server.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Acceptor.h"
#include "Reactor.h"

int _tmain(int argc, _TCHAR* argv[])
{
	// Initialize concrete acceptors to listen for // connections on their well-known ports.
	Reactor reactor;
	Acceptor acceptor(5500, (IReactor*)&reactor);
	//Bulk_Data_Acceptor bd_acceptor(BULK_DATA_PORT, Reactor::instance());
	//Command_Acceptor c_acceptor(COMMAND_PORT,
		//Reactor::instance());
	// Event loop that accepts connection request
	// events and processes data from a gateway.
	for (;;){

	}
		//Reactor::instance()->handle_events(); /* NOTREACHED */
	
	return 0;
}