#include "serverNode.h"
using namespace std;

ServerNode::ServerNode(string IP, int PORT)
{
	this->IP = IP;
	this->PORT = PORT;
}
void sendData(string IP, int PORT)
{
    try
    {
        WSASession Session;
        UDPSocket Socket;
        std::string data = "hello world";
        char buffer[100];

        while (1)
        {
            std::cout << "Enter data to transmit : " << std::endl;
            std::getline(std::cin, data);
            Socket.SendTo(IP, PORT, data.c_str(), data.size());
        }
    }
    catch (std::exception& ex)
    {
        std::cout << ex.what();
    }
}