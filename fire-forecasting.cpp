#include "fire-forecasting.h"

using namespace std;

int main()
{

	string IP = "127.0.0.1";
	int PORT = 8888;

	ClientNode client1(PORT);
	client1.recieveData(PORT);

	//Calculations calculations(currentTemp, 30, 600);
	//calculations.setAverageTemperatureInCelsius(calculations.calculateAverageTemperatureInCelsius(calculations.getAccumulatedTemperatureInCelsius(), calculations.getTotalNumberOfRecievedTemperatureValues()));
	//calculations.reportAverageAndAccumulative();
	//cout << "current temp is: " << currentTemp<<"	average temp is: "<<calculations.getAverageTemperatureInCelsius() << "	temp sum is: " << calculations.getAccumulatedTemperatureInCelsius() << "	no of temp readings is : " << calculations.getTotalNumberOfRecievedTemperatureValues() << endl;
	//calculations.setAccumulatedTemperatureInCelsius(calculations.calculateAccumulatedTemperatureInCelsius(currentTemp, calculations.getAccumulatedTemperatureInCelsius()));
	//cout << "current temp is: " << currentTemp << "	average temp is: " << calculations.getAverageTemperatureInCelsius()<< "	temp sum is: " << calculations.getAccumulatedTemperatureInCelsius() << "	no of temp readings is : " << calculations.getTotalNumberOfRecievedTemperatureValues() << endl;
	//calculations.setAverageTemperatureInCelsius(calculations.calculateAverageTemperatureInCelsius(calculations.getAccumulatedTemperatureInCelsius(), calculations.getTotalNumberOfRecievedTemperatureValues()));
	//cout << "current temp is: " << currentTemp << "	average temp is: " << calculations.getAverageTemperatureInCelsius()<< "	temp sum is: " << calculations.getAccumulatedTemperatureInCelsius() << "	no of temp readings is : " << calculations.getTotalNumberOfRecievedTemperatureValues() << endl;


	return 0;
}
