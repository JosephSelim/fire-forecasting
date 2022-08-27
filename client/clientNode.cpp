#include "clientNode.h"
using namespace std;

ClientNode::ClientNode(int PORT)
{
    this->PORT = PORT;
}
void recieveData(int PORT)
{
    try
    {
        WSASession Session;
        UDPSocket Socket;
        char buffer[100];

        Socket.Bind(PORT);
        while (1)
        {
            Socket.RecvFrom(buffer, sizeof(buffer));
            std::string input(buffer);
            std::cout << "Data received: " << input << std::endl;
        }
    }
    catch (std::system_error& e)
    {
        std::cout << e.what();
    }
}