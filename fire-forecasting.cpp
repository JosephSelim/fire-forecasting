#include "fire-forecasting.h"

using namespace std;

int main()
{
	SensorNode tempSensor;
	cout<<tempSensor.getTemperatureInCelsius()<<endl;

	string IP = "127.0.0.1";
	int PORT = 8888;

	ServerNode server(IP, PORT);
	ClientNode client1(PORT);
	server.sendData(IP,PORT);
	client1.recieveData(PORT);
	return 0;
}
