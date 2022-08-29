#include <gtest/gtest.h>


extern "C"
{
#include "../client/calculations.cpp"
}

TEST(Test_Suite_averageTemp,noOfTempValsIs0_accumIs0 )
{
    double actualAverageTemp=0.0, expectedAverageTemp=0.0;
    double accumulatedTemp = 0.0;
    double noOfTempVals = 0.0;
    calculateAverageTemperatureInCelsius(&actualAverageTemp,&accumulatedTemp,&noOfTempVals);
    EXPECT_EQ(expectedAverageTemp, actualAverageTemp);

}