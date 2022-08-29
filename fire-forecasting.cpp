#include "fire-forecasting.h"

using namespace std;
void calculateAccumulatedTemperatureInCelsius(double* temperatureInCelsius, double* accumulatedTemperatureInCelsius, double* totalNumberOfRecievedTemperatureValues)
{
	*totalNumberOfRecievedTemperatureValues = *totalNumberOfRecievedTemperatureValues + 1;
	*accumulatedTemperatureInCelsius += *temperatureInCelsius;
}
void calculateAverageTemperatureInCelsius(double* averageTemperatureInCelsius, double* accumulatedTemperatureInCelsius, double* totalNumberOfRecievedTemperatureValues)
{
	if(*totalNumberOfRecievedTemperatureValues !=0)
	{
		(*averageTemperatureInCelsius) = (*accumulatedTemperatureInCelsius) / (*totalNumberOfRecievedTemperatureValues);
	}
}
void reportAverageAndAccumulative(double* averageTemperatureInCelsius, double* accumulatedTemperatureInCelsius)
{
	while (1) 
	{
		cout << "---------------------------Report---------------------------" << endl;
		cout << "Average temperature is:		" << *averageTemperatureInCelsius << endl;
		cout << "Accumulative temperature is :  " << *accumulatedTemperatureInCelsius << endl;
		Sleep(5000);
	}
}
int main()
{

	string IP = "127.0.0.1";
	int PORT = 8888;

	ClientNode client1(IP,PORT);
	client1.initClientNode();
	double temperatureInCelsius = 0.0, accumulatedTemperatureInCelsius =0.0, averageTemperatureInCelsius =0.0, totalNumberOfRecievedTemperatureValues =0;
	thread t3(reportAverageAndAccumulative, &averageTemperatureInCelsius, &accumulatedTemperatureInCelsius);
	while (1)
	{
		temperatureInCelsius = client1.recieveData();
		thread t1(calculateAccumulatedTemperatureInCelsius, &temperatureInCelsius,&accumulatedTemperatureInCelsius,&totalNumberOfRecievedTemperatureValues);
		t1.join();
		thread t2(calculateAverageTemperatureInCelsius, &averageTemperatureInCelsius, &accumulatedTemperatureInCelsius, &totalNumberOfRecievedTemperatureValues);
		t2.join();
	}
	return 0;
}
