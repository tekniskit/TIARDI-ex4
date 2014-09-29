#pragma once
#include "SynchronousEventDemultiplexerInterface.h"
#include "EventHandlerInterface.h"
#include <list>
#include "SOCK_Stream.h"
#include "SOCK_Acceptor.h"
#include "INET_Addr.h"
#include "NetworkHandle.h"
#include "Reactor.h"

using namespace std;

class SynchronousEventDemultiplexerSock : public SynchronousEventDemultiplexerInterface  {
private:
	//list<SOCK_Stream*> socketList; 
	SOCK_Acceptor* acceptorPtr;

	fd_set readfds;
	fd_set writefds;
	fd_set Errorfds;
	NetworkHandle handle;
	Reactor* reactor_;
	void prepFdsSet();
	void Disconnect(SOCK_Stream* value);

public:
	SynchronousEventDemultiplexerSock(SOCK_Acceptor* acceptor, Reactor* reactor);
	~SynchronousEventDemultiplexerSock();
	NetworkEvent getNetworkEvent();
	void handleEvent(Handle* handle);	
	
};