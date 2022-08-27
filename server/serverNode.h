#ifndef SERVERNODE_H
#define SERVERNODE_H

#include <string>
#include "Network.h"
#include "iostream"
class ServerNode
{
private:
	string IP;
	int PORT;
public:
	ServerNode();
	ServerNode(string IP, int PORT);
	void sendData(string IP,int PORT);
};
#endif // !SERVERNODE_H
