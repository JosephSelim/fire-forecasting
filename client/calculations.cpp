#include "calculations.h"

void calculateAccumulatedTemperatureInCelsius(double* temperatureInCelsius, double* accumulatedTemperatureInCelsius, double* totalNumberOfRecievedTemperatureValues)
{
	*totalNumberOfRecievedTemperatureValues = *totalNumberOfRecievedTemperatureValues + 1;
	*accumulatedTemperatureInCelsius += *temperatureInCelsius;
}
void calculateAverageTemperatureInCelsius(double* averageTemperatureInCelsius, double* accumulatedTemperatureInCelsius, double* totalNumberOfRecievedTemperatureValues)
{
	if (*totalNumberOfRecievedTemperatureValues != 0)
	{
		(*averageTemperatureInCelsius) = (*accumulatedTemperatureInCelsius) / (*totalNumberOfRecievedTemperatureValues);
	}
}

bool hello()
{
	return true;
}
