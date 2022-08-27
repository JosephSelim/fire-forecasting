#ifndef CLIENTNODE_H
#define CLIENTNPDE_H
#include "iostream"

class ClientNode 
{
private:
	int PORT;
public:
	ClientNode();
	ClientNode(int PORT);
	void recieveData(int PORT);
};
#endif // !CLIENTNODE_H
