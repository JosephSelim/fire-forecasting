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
	Calculations(double temperatureInCelsius, double totalNumberOfRecievedTemperatureValues, double accumulatedTemperatureInCelsius);
	double calculateAccumulatedTemperatureInCelsius(double temperatureInCelsius, double accumulatedTemperatureInCelsius);
	double calculateAverageTemperatureInCelsius(double accumulatedTemperatureInCelsius, double totalNumberOfRecievedTemperatureValues);
	
	double getAverageTemperatureInCelsius();
	double getTotalNumberOfRecievedTemperatureValues();
	double getAccumulatedTemperatureInCelsius();

	void setAccumulatedTemperatureInCelsius(double accumulatedTemperatureInCelsius);
	void setAverageTemperatureInCelsius(double averageTemp);
	void setTotalNumberOfRecievedTemperatureValues(double totalNumberOfRecievedTemperatureValues);

	void reportAverageAndAccumulative();
};
#endif // !CALCULATIONS_H
