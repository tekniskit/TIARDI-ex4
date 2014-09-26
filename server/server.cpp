// server.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Acceptor.h"
#include "Reactor.h"

int _tmain(int argc, _TCHAR* argv[])
{
	// Initialize concrete acceptors to listen for // connections on their well-known ports.
	Reactor reactor;
	Acceptor acceptor(5500, (IReactor*)&reactor);
	// Event loop that accepts connection request
	// events and processes data from a gateway.
	for (;;){
		reactor.handleEvents();
	}



	return 0;
}