#include <gtest/gtest.h>


extern "C"
{
#include "../client/calculations.cpp"
}

TEST(Test_Suite_averageTemp,all_zeros )
{
    double actualAverageTemp=0.0, expectedAverageTemp=0.0;
    double accumulatedTemp = 0.0;
    double noOfTempVals = 0.0;
    calculateAverageTemperatureInCelsius(&actualAverageTemp,&accumulatedTemp,&noOfTempVals);
    EXPECT_EQ(expectedAverageTemp, actualAverageTemp);

}
TEST(Test_Suite_averageTemp, random_values)
{
    double actualAverageTemp = 0.0, expectedAverageTemp = 26.55;
    double accumulatedTemp = 265.5;
    double noOfTempVals = 10;
    calculateAverageTemperatureInCelsius(&actualAverageTemp, &accumulatedTemp, &noOfTempVals);
    EXPECT_EQ(expectedAverageTemp, actualAverageTemp);

}

TEST(Test_Suite_accumulatedTemp, all_zeros)
{
    double actualAccumulatedTemp = 0.0, expectedAccumulatedTemp = 0.0;
    double currentTemp = 0.0;
    double noOfTempVals = 0, expectedNoOfTempVals = noOfTempVals + 1;
    calculateAccumulatedTemperatureInCelsius(&currentTemp, &actualAccumulatedTemp, &noOfTempVals);
    EXPECT_EQ(expectedAccumulatedTemp, actualAccumulatedTemp);
    EXPECT_EQ(expectedNoOfTempVals, noOfTempVals);

}
TEST(Test_Suite_accumulatedTemp, random_values)
{
    double actualAccumulatedTemp = 0.0, expectedAccumulatedTemp = 5.5;
    double currentTemp = 5.5;
    double noOfTempVals = 5,expectedNoOfTempVals= noOfTempVals +1;
    calculateAccumulatedTemperatureInCelsius(&currentTemp, &actualAccumulatedTemp, &noOfTempVals);
    EXPECT_EQ(expectedAccumulatedTemp, actualAccumulatedTemp);
    EXPECT_EQ(expectedNoOfTempVals, noOfTempVals);

}