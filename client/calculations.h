#ifndef CALCULATIONS_H
#define CALCULATIONS_H
#include <iostream>

class Calculations
{
private:
	double temperatureInCelsius;
	double averageTemperatureInCelsius;
	double totalNumberOfRecievedTemperatureValues;
	double accumulatedTemperatureInCelsius;
public:
	Calculations();
	//Calculations(double temperatureInCelsius, double totalNumberOfRecievedTemperatureValues, double accumulatedTemperatureInCelsius);
	double calculateAccumulatedTemperatureInCelsius();
	double calculateAverageTemperatureInCelsius();
	double getTemperatureInCelsius();
	void setTemperatureInCelsius(double temperatureInCelsius);
	//double getAverageTemperatureInCelsius();
	//double getTotalNumberOfRecievedTemperatureValues();
	//double getAccumulatedTemperatureInCelsius();

	//void setAccumulatedTemperatureInCelsius(double accumulatedTemperatureInCelsius);
	//void setAverageTemperatureInCelsius(double averageTemp);
	//void setTotalNumberOfRecievedTemperatureValues(double totalNumberOfRecievedTemperatureValues);

	void reportAverageAndAccumulative();
};
#endif // !CALCULATIONS_H
