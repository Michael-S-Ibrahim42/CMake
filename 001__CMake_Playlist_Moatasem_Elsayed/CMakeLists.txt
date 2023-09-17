# define minimum cmake version to use
cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# define project
project(HELLOAPP VERSION 1.0) 
set(SRC_FILES src/main.cpp src/calc.cpp)
add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
# define the executable with its dependencies
add_executable(hellobinary ${SRC_FILES})
set(PRODUCT_YEAR 2023)
configure_file(defaultconfig.h.in defaultconfig.h)
# add include directory (./include/)
target_include_directories(hellobinary PUBLIC include/ lib/ ${PROJECT_BINARY_DIR})
target_link_libraries(hellobinary PUBLIC wifi_lib)