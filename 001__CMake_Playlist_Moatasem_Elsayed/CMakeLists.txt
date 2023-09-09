# define minimum cmake version to use
cmake_minimum_required(VERSION 3.22)
# define project
project(HELLOAPP)
# define the executable with its dependencies
add_executable(hellobinary src/calc.cpp src/main.cpp)
# add include directory (./include/)
target_include_directories(hellobinary PUBLIC include/)