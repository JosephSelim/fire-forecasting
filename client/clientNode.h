#ifndef CLIENTNODE_H
#define CLIENTNPDE_H
#include <string>
#include "../Network.h"
#include "iostream"

class ClientNode 
{
private:
	int PORT;
public:
	ClientNode();
	ClientNode(int PORT);
	void recieveDATA(int PORT);
};
#endif // !CLIENTNODE_H
