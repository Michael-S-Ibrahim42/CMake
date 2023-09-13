# define minimum cmake version to use
cmake_minimum_required(VERSION 3.22)
# define project
project(HELLOAPP)
set(SRC_FILES src/main.cpp src/calc.cpp)
add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
# define the executable with its dependencies
add_executable(hellobinary ${SRC_FILES})
# add include directory (./include/)
target_include_directories(hellobinary PUBLIC include/ lib/)
target_link_libraries(hellobinary PUBLIC wifi_lib)