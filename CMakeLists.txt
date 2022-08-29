# CMakeList.txt : CMake project for fire-forecasting, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("fire-forecasting")
set(CMAKE_CXX_STANDARD 14)

enable_testing()
include(GoogleTest)

add_subdirectory(client)
add_subdirectory(unitTesting)

# Add source to this project's executable.
add_executable (fire-forecasting "fire-forecasting.cpp" "fire-forecasting.h" "client/clientNode.h" "client/clientNode.cpp" "client/calculations.cpp" "client/calculations.h")
target_link_libraries(${PROJECT_NAME} calculations)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET fire-forecasting PROPERTY CXX_STANDARD 20)
endif()
