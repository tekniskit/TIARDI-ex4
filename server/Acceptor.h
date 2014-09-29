#pragma once
#include "IAcceptor.h"
#include "IReactor.h"
#include "SOCK_Acceptor.h"
#include "SOCK_Stream.h"
#include <list>
#include <iostream>

class Acceptor : public IAcceptor
{
public:
	Acceptor();
	Acceptor(int port, IReactor* reactor);
	~Acceptor();
	void handleEvent(Handle* handle);
	void accept();
	SOCK_Acceptor* getPeerAcceptor();

private:
	SOCK_Acceptor* peer_acceptor_;
	
};