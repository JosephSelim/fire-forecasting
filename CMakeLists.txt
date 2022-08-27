# CMakeList.txt : CMake project for fire-forecasting, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("fire-forecasting")

# Add source to this project's executable.
add_executable (fire-forecasting "fire-forecasting.cpp" "fire-forecasting.h" "server/sensorNode.cpp" "server/sensorNode.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET fire-forecasting PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
