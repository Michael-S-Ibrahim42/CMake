# define minimum cmake version to use
cmake_minimum_required(VERSION 3.22)
# define project
project(HELLOAPP)
set(SRC_FILES src/main.cpp src/calc.cpp)
message("SRS Files has ${SRC_FILES}")
if(EXISTS ${CMAKE_SOURCE_DIR}/src/main.cpp)
    message("File is exist")
else()
    message(FATAL_ERROR "File is not exist")
endif()

# define the executable with its dependencies
add_executable(hellobinary ${SRC_FILES})
# add include directory (./include/)
target_include_directories(hellobinary PUBLIC include/)