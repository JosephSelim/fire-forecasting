#include "calculations.h"
using namespace std;

//Calculations::Calculations(double temperatureInCelsius, double totalNumberOfRecievedTemperatureValues, double accumulatedTemperatureInCelsius)
//{
//	this->temperatureInCelsius = temperatureInCelsius;
//	this->totalNumberOfRecievedTemperatureValues = totalNumberOfRecievedTemperatureValues;
//	this->accumulatedTemperatureInCelsius = accumulatedTemperatureInCelsius;
//}

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

void Calculations::reportAverageAndAccumulative()
{
	cout << "Average temperature over time is :" << averageTemperatureInCelsius << " Accumulative temperature over time is: " << accumulatedTemperatureInCelsius << endl;
}

//-----------------------------------------getters-------------------------------------------------------------------
//double Calculations::getAverageTemperatureInCelsius()
//{
//	return averageTemperatureInCelsius;
//}
//double Calculations::getTotalNumberOfRecievedTemperatureValues()
//{
//	return totalNumberOfRecievedTemperatureValues;
//}
//double Calculations::getAccumulatedTemperatureInCelsius()
//{
//	return accumulatedTemperatureInCelsius;
//}
//---------------------------------------- - setters------------------------------------------------------------------ -
//void Calculations::setAverageTemperatureInCelsius(double averageTemperatureInCelsius)
//{
//	this->averageTemperatureInCelsius = averageTemperatureInCelsius;
//}
//void Calculations::setAccumulatedTemperatureInCelsius(double accumulatedTemperatureInCelsius)
//{
//	this->accumulatedTemperatureInCelsius = accumulatedTemperatureInCelsius;
//}
//void Calculations::setTotalNumberOfRecievedTemperatureValues(double totalNumberOfRecievedTemperatureValues)
//{
//	this->totalNumberOfRecievedTemperatureValues = totalNumberOfRecievedTemperatureValues;
//}
