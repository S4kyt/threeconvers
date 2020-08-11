#include <iostream>
#include <iomanip> // setprecision

#include "conv.h"

void meterAndFeet()
{
    std::string mfChoice;

    std::cout << "Meter <-> Feet converion.\n" << std::endl;
    std::cout << "1. Meter to Feet" << std::endl;
    std::cout << "2. Feet to Meter" << std::endl;
    std::cout << "3. Return to previous menu" << std::endl;

    bool onMeterToFeet = true;

    while (onMeterToFeet == true)
    {    
        std::cin >> mfChoice;

        if (mfChoice == "1")
        {
            clearScreen();
            double meterUnit;
            std::cout << "Enter the amount of meters you would like to convert to feet." << std::endl;
            std::cin >> meterUnit;

            double feetUnit = (meterUnit * 3.2808399);
            std::cout << std::setprecision(4) << "Converted value from meter to feet: " << feetUnit << " ft" << std::endl;
        }
        else if (mfChoice == "2")
        {
            clearScreen();
            double feetUnit;
            std::cout << "Enter the amount of feet you would like to convert to meter." << std::endl;
            std::cin >> feetUnit;

            double meterUnit = (feetUnit * 0.3048);
            std::cout << std::setprecision(4) << "Converted value from feet to meter: " << meterUnit << " ft" << std::endl;
        }    
    }
}

void kgAndStone()
{
    //TODO: Next up    
}

void celsiusAndFahren()
{
    //TODO: Next up after kgAndStone
}

void clearScreen()
{
    std::cout << "\033[2J\033[u";
}