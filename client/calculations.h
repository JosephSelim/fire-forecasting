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
	double calculateAccumulatedTemperatureInCelsius();
	double calculateAverageTemperatureInCelsius();
	double getTemperatureInCelsius();
	void setTemperatureInCelsius(double temperatureInCelsius);
	void reportAverageAndAccumulative();
};
#endif // !CALCULATIONS_H
