#include "clientNode.h"
using namespace std;

ClientNode::ClientNode()
{
}



ClientNode::ClientNode(string IP, int PORT)
{
    this->PORT = PORT;
    this->IP = IP;
}
void ClientNode::initClientNode()
{
    system("title UDP Client");

    // initialise winsock
    WSADATA ws;
    printf("Initialising Winsock...");
    if (WSAStartup(MAKEWORD(2, 2), &ws) != 0)
    {
        printf("Failed. Error Code: %d", WSAGetLastError());
    }
    printf("Initialised.\n");


    if ((client_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == SOCKET_ERROR) // <<< UDP socket
    {
        printf("socket() failed with error code: %d", WSAGetLastError());
    }

    // setup address structure
    memset((char*)&server, 0, sizeof(server));
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);
    server.sin_addr.S_un.S_addr = inet_addr(IP.c_str());

    // start communication
    char message[BUFFER];
    string newClientJoined = "new client joined";
    strcpy(message, newClientJoined.c_str());
    // send first message to server to open communication
    if (sendto(client_socket, message, strlen(message), 0, (sockaddr*)&server, sizeof(sockaddr_in)) == SOCKET_ERROR)
    {
        printf("sendto() failed with error code: %d", WSAGetLastError());
    }
}
double ClientNode::recieveData()
{
        // receive a reply and print it
        // clear the answer by filling null, it might have previously received data
        char answer[BUFFER] = {};

        // try to receive some data, this is a blocking call
        int slen = sizeof(sockaddr_in);
        int answer_length;
        if (answer_length = recvfrom(client_socket, answer, BUFFER, 0, (sockaddr*)&server, &slen) == SOCKET_ERROR)
        {
            printf("recvfrom() failed with error code: %d", WSAGetLastError());
            exit(0);
        }
        //cout << answer << "\n";
        string s = answer;
        return stod(s);
}
ClientNode::~ClientNode()
{
    closesocket(client_socket);
    WSACleanup();
}