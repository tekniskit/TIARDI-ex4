#pragma once 
#include "EventHandlerInterface.h"

class IAcceptor : public EventHandlerInterface {
public:
	virtual void handleEvent() = 0;
	virtual void accept() = 0;
};