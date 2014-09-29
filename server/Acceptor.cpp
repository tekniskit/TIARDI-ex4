#include "Acceptor.h"

Acceptor::Acceptor(){
}

Acceptor::Acceptor(int port, IReactor* reactor){
	INET_Addr addr(port, 0x7F000001);
	peer_acceptor_ = new SOCK_Acceptor(addr);
	reactor->registerHandler(this, 6); // 6 is the event type for the acceptor (in Demux en exercise 4)
}

Acceptor::~Acceptor(){
	delete peer_acceptor_;
}

SOCK_Acceptor* Acceptor::getPeerAcceptor(){
	return peer_acceptor_;
}

void Acceptor::handleEvent(Handle* handle){
	accept();
}
void Acceptor::accept(){
	SOCK_Stream* stream = new SOCK_Stream();
	peer_acceptor_->accept(*stream);
	//socketList.push_back(stream);
	std::cout << "Client connected" << std::endl;
}