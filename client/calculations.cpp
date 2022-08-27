#include "calculations.h"
using namespace std;

Calculations::Calculations(double temperatureInCelsius, double totalNumberOfRecievedTemperatureValues, double accumulatedTemperatureInCelsius)
{
	this->temperatureInCelsius = temperatureInCelsius;
	this->totalNumberOfRecievedTemperatureValues = totalNumberOfRecievedTemperatureValues;
	this->accumulatedTemperatureInCelsius = accumulatedTemperatureInCelsius;
}

double Calculations::calculateAverageTemperatureInCelsius(double temperatureInCelsius, double accumulatedTemperatureInCelsius, double totalNumberOfRecievedTemperatureValues)
{
	return (accumulatedTemperatureInCelsius + temperatureInCelsius) / totalNumberOfRecievedTemperatureValues;
}
double Calculations::calculateAccumulatedTemperatureInCelsius(double temperatureInCelsius, double accumulatedTemperatureInCelsius)
{
	return accumulatedTemperatureInCelsius + temperatureInCelsius;
}

double Calculations::getAverageTemperatureInCelsius()
{
	return averageTemperatureInCelsius;
}
void Calculations::setAverageTemperatureInCelsius(double averageTemperatureInCelsius)
{
	this->averageTemperatureInCelsius = averageTemperatureInCelsius;
}

double Calculations::getAccumulatedTemperatureInCelsius()
{
	return accumulatedTemperatureInCelsius;
}

void Calculations::setAccumulatedTemperatureInCelsius(double accumulatedTemperatureInCelsius)
{
	this->accumulatedTemperatureInCelsius = accumulatedTemperatureInCelsius;
}

void Calculations::setTotalNumberOfRecievedTemperatureValues(double totalNumberOfRecievedTemperatureValues)
{
	this->totalNumberOfRecievedTemperatureValues = totalNumberOfRecievedTemperatureValues;
}
double Calculations::getTotalNumberOfRecievedTemperatureValues()
{
	return totalNumberOfRecievedTemperatureValues;
}