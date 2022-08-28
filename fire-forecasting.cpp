#include "fire-forecasting.h"

using namespace std;

int main()
{

	string IP = "127.0.0.1";
	int PORT = 8888;

	ClientNode client1(IP,PORT);
	client1.initClientNode();
	Calculations calculationsForClient1;
	while (1)
	{
		calculationsForClient1.setTemperatureInCelsius (client1.recieveData());
		calculationsForClient1.calculateAccumulatedTemperatureInCelsius();
		calculationsForClient1.calculateAverageTemperatureInCelsius();
		calculationsForClient1.reportAverageAndAccumulative();
	}
	return 0;
}
