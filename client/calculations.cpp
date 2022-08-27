#include "calculations.h"
using namespace std;

Calculations::Calculations(double temperatureInCelsius, double totalNumberOfRecievedTemperatureValues, double accumulatedTemperatureInCelsius)
{
	this->temperatureInCelsius = temperatureInCelsius;
	this->totalNumberOfRecievedTemperatureValues = totalNumberOfRecievedTemperatureValues;
	this->accumulatedTemperatureInCelsius = accumulatedTemperatureInCelsius;
}

double Calculations::calculateAccumulatedTemperatureInCelsius(double temperatureInCelsius, double accumulatedTemperatureInCelsius)
{
	totalNumberOfRecievedTemperatureValues++;
	return accumulatedTemperatureInCelsius + temperatureInCelsius;
}

double Calculations::calculateAverageTemperatureInCelsius(double accumulatedTemperatureInCelsius, double totalNumberOfRecievedTemperatureValues)
{
	return accumulatedTemperatureInCelsius / totalNumberOfRecievedTemperatureValues;
}

void Calculations::reportAverageAndAccumulative()
{
	cout << "Average temperature over time is :" << averageTemperatureInCelsius << " Accumulative temperature over time is: " << accumulatedTemperatureInCelsius << endl;
}

//-----------------------------------------getters-------------------------------------------------------------------
double Calculations::getAverageTemperatureInCelsius()
{
	return averageTemperatureInCelsius;
}
double Calculations::getTotalNumberOfRecievedTemperatureValues()
{
	return totalNumberOfRecievedTemperatureValues;
}
double Calculations::getAccumulatedTemperatureInCelsius()
{
	return accumulatedTemperatureInCelsius;
}
//---------------------------------------- - setters------------------------------------------------------------------ -
void Calculations::setAverageTemperatureInCelsius(double averageTemperatureInCelsius)
{
	this->averageTemperatureInCelsius = averageTemperatureInCelsius;
}
void Calculations::setAccumulatedTemperatureInCelsius(double accumulatedTemperatureInCelsius)
{
	this->accumulatedTemperatureInCelsius = accumulatedTemperatureInCelsius;
}
void Calculations::setTotalNumberOfRecievedTemperatureValues(double totalNumberOfRecievedTemperatureValues)
{
	this->totalNumberOfRecievedTemperatureValues = totalNumberOfRecievedTemperatureValues;
}
