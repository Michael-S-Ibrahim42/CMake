#include <iostream>
#include "calc.hpp"
#include "wifi.hpp"

int main(void)
{
    std::cout << Sum(1,2) << std::endl;
    InitWifi();
    return(0);
}/* main */