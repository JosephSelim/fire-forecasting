#include "clientNode.h"
using namespace std;

ClientNode::ClientNode(int PORT)
{
    this->PORT = PORT;
}
void ClientNode::recieveData(int PORT)
{
    cout << "received data from port: " << PORT << endl;
}