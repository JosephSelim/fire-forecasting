#ifndef CLIENTNODE_H
#define CLIENTNPDE_H
#include "iostream"
#include <winsock2.h>
#include <string>
#pragma comment(lib,"ws2_32.lib") 
#pragma warning(disable:4996) 

#define BUFFER 512
using namespace std;
class ClientNode 
{
private:
	int PORT;
	string IP;
	int client_socket;
	sockaddr_in server;
public:
	ClientNode();
	~ClientNode();
	ClientNode(string IP,int PORT);
	void initClientNode();
	double recieveData();
};
#endif // !CLIENTNODE_H
