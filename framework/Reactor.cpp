#include "Reactor.h"
#include "NetworkEvent.h"
#include "EventHandlerInterface.h"

void Reactor::registerHandler(EventHandlerInterface* handler, Event_Type type)
{
	handlerTabel.addHandler(type, handler);
}

void Reactor::removeHandler(Event_Type type)
{
	handlerTabel.removeHandler(type);
}


void Reactor::handleEvents(Time_Value* time)
{
	NetworkEvent event = demultiplexer->getNetworkEvent();
	if (event.getEventType() != 0)
	{

		EventHandlerInterface* handler = handlerTabel.getHandler(event.getEventType());

		if (handler != nullptr)
		{
			handler->handleEvent(event.getHandle());
		}
	}
}

void Reactor::pushStream(SOCK_Stream* stream){
	socketList_.push_back(stream);
}

void Reactor::removeStream(SOCK_Stream* stream){
	socketList_.remove(stream);
}

Reactor::Reactor()
{

}

Reactor::Reactor(SynchronousEventDemultiplexerInterface* _demultiplexer)
{
	setSynchronousEventDemultiplexer(_demultiplexer);
}

void Reactor::setSynchronousEventDemultiplexer(SynchronousEventDemultiplexerInterface* _demultiplexer)
{
	demultiplexer = _demultiplexer;
}