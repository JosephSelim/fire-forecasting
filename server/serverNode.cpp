#include "serverNode.h"


ServerNode::ServerNode(string IP, int PORT)
{
	this->IP = IP;
    this->PORT = PORT;
}
void ServerNode::sendData(string IP, int PORT)
{
	cout << "sentdata from IP: " << IP<< ":"<<PORT<< endl;
}