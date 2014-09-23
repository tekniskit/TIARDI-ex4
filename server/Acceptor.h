#pragma once
#include "IAcceptor.h"
class Acceptor : public IAcceptor
{
public:
	Acceptor();
	~Acceptor();
	void handleEvent();
	void accept();
};