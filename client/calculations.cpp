#include "calculations.h"
using namespace std;

Calculations::Calculations()
{
	temperatureInCelsius = 0;
	averageTemperatureInCelsius = 0;
	totalNumberOfRecievedTemperatureValues = 0;
	accumulatedTemperatureInCelsius = 0;
}

double Calculations::calculateAccumulatedTemperatureInCelsius()
{
	totalNumberOfRecievedTemperatureValues++;
	accumulatedTemperatureInCelsius += temperatureInCelsius;
	return accumulatedTemperatureInCelsius;
}

double Calculations::calculateAverageTemperatureInCelsius()
{
	averageTemperatureInCelsius = accumulatedTemperatureInCelsius / totalNumberOfRecievedTemperatureValues;
	return averageTemperatureInCelsius;
}

double Calculations::getTemperatureInCelsius()
{
	return temperatureInCelsius;
}

void Calculations::setTemperatureInCelsius(double temperatureInCelsius)
{
	this->temperatureInCelsius = temperatureInCelsius;
}

void Calculations::reportAverageAndAccumulative()
{
	cout << "Average temperature over time is :" << averageTemperatureInCelsius << " Accumulative temperature over time is: " << accumulatedTemperatureInCelsius << endl;
}