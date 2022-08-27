#include "SensorNode.h"
#include<iostream>
#include<cstdlib>
using namespace std;

SensorNode::SensorNode()
{}

double SensorNode::randomTemperatureGenerator(double lowerTemperatureBoundary, double higherTemperatureBoundary)
{
	srand((unsigned)time(NULL));
	lowerTemperatureBoundary /= 1.3;
	higherTemperatureBoundary /= 1.3;
	double random = lowerTemperatureBoundary + (rand() % int(higherTemperatureBoundary - lowerTemperatureBoundary)) * 1.3;
	return random;
}

double SensorNode::getTemperatureInCelsius()
{
	temperatureInCelsius = randomTemperatureGenerator(0.0, 100.0);
	return temperatureInCelsius;
}