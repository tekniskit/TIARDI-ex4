#include "Connector.h"
#include "SynchronousEventDemultiplexerClient.h"

void Connector::Connect(ConnectFunction sh_, INET_Addr addr)
{
	sh = sh_; 
	
	SOCKET Socket = sock_connector.connectNONBlock(addr);
	SOCK_Stream *stream = new SOCK_Stream();
	stream->set_handle(Socket);
	SynchronousEventDemultiplexerClient* client = new SynchronousEventDemultiplexerClient(stream);
	reactor->setSynchronousEventDemultiplexer(client); 

	reactor->registerHandler(this, 10); 
}

Connector::Connector(Reactor *reactor_)
{
	reactor = reactor_; 
}

Connector::~Connector()
{

}

void Connector::handleEvent(Handle* handle)
{
	sh(handle);
}