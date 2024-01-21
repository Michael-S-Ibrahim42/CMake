#include <iostream>
#include "calc.hpp"
#include "wifi.hpp"
#include "defaultconfig.h"

int main(void)
{
#ifdef DEBUG
    std::cout << DEBUGINFO << std::endl;
#endif
    std::cout << "Software Version is " << HELLOAPP_VERSION_MAJOR << '.' << HELLOAPP_VERSION_MINOR << std::endl;
    InitWifi();
    std::cout << "Product Type is " << ProductType << std::endl;
    std::cout << "Product Year is " << PRODUCT_YEAR << std::endl;
    return(0); 
}/* main */