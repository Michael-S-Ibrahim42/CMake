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
set(PRODUCT_YEAR 2024)
# add include directory (./include/)
target_include_directories(hellobinary PUBLIC include/ lib/ ${PROJECT_BINARY_DIR})
if(TARGET wifi_lib)
    message("Library is exist")
    target_link_libraries(hellobinary PUBLIC wifi_lib)
endif()
if(DEBUG)
set(DEBUGINFO "Author Michael Ibrahim")
endif()
configure_file(defaultconfig.h.in defaultconfig.h)
# # loop over items
# foreach(i IN ITEMS M I C H A E L)
#     message(STATUS ${i})
# endforeach()
# # loop over list
# set(lst S A M I R)
# foreach(i IN LISTS lst)
#     message(STATUS ${i})
# endforeach()
# while loops
set(VAR 10)
while(VAR)
    message(${VAR})
    math(EXPR VAR "${VAR} - 1")
endwhile()
# function
# function(happynewyear arg1)
#     message("ARG1 ${arg1}")#show the name of the passed argument
#     message("ARG1 ${${arg1}}") #show the value of the passed argument
#     message("ARG1 ${ARGN}") #extra arguments values
#     message("ARG1 ${ARGC}") #arguments count
# endfunction()

# set(var 2 0 2 2)
# happynewyear(var jan)
# option(CVar "Var" TRUE)
# set(Var2 TRUE CACHE BOOL "Cached Variable")
# message("Cached Variable Value = ${Var2}")