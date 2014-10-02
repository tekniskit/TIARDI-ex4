// server.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Acceptor.h"
#include "Reactor.h"
#include "INET_Addr.h"
#include "SynchronousEventDemultiplexerSock.h"
#include "ReadFromDatabaseEvent.h"

int _tmain(int argc, _TCHAR* argv[])
{
	// Initialize concrete acceptors to listen for // connections on their well-known ports.
	Reactor reactor;
	ReadFromDatabaseEvent databaseHandler;
	reactor.registerHandler(&databaseHandler, 7);
	Acceptor acceptor(5500, (IReactor*)&reactor); // &SOCK_Acceptor
	
	
	//demux = SynchronousEventDemultiplexerSock(acceptor.getPeerAcceptor());
	//reactor.setSynchronousEventDemultiplexer() demux
	// Event loop that accepts connection request
	// events and processes data from a gateway.
	for (;;){
		reactor.handleEvents();
	}



	return 0;
}