#ifndef CALCULATIONS_H
#define CALCULATIONS_H

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
	double calculateAverageTemperatureInCelsius(double temperatureInCelsius, double accumulatedTemperatureInCelsius, double totalNumberOfRecievedTemperatureValues);
	double calculateAccumulatedTemperatureInCelsius(double temperatureInCelsius, double accumulatedTemperatureInCelsius);
	double getAverageTemperatureInCelsius();
	void setAverageTemperatureInCelsius(double averageTemp);
	double getTotalNumberOfRecievedTemperatureValues();
	void setTotalNumberOfRecievedTemperatureValues(double totalNumberOfRecievedTemperatureValues);
	double getAccumulatedTemperatureInCelsius();
	void setAccumulatedTemperatureInCelsius(double accumulatedTemperatureInCelsius);
};
#endif // !CALCULATIONS_H
