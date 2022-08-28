#ifndef CLIENTNODE_H
#define CLIENTNPDE_H
#include "iostream"
#include <winsock2.h>

#pragma comment(lib,"ws2_32.lib") 
#pragma warning(disable:4996) 

#define BUFFER 512
class ClientNode 
{
private:
	int PORT;
	string IP;
public:
	ClientNode();
	~ClientNode();
	ClientNode(int PORT);
	void initClientNode();
	void recieveData(int PORT);
};
#endif // !CLIENTNODE_H
