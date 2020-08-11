#include <iostream>
#include <iomanip> // setprecision
#include <limits> // numeric limits, streamsize

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
        else if (mfChoice == "3")
        {
            onMeterToFeet = false;
            return;
        }
        else
        {
            std::cout << "Please choose a valid option!" << std::endl; 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

void kgAndStone()
{
    //TODO: Next up    
}

void celsiusAndFahren()
{
    std::string cfChoice;

    std::cout << "Celsius <-> Fahrenheit converion.\n" << std::endl;
    std::cout << "1. C° to °F" << std::endl;
    std::cout << "2. °F to C°" << std::endl;
    std::cout << "3. Return to previous menu" << std::endl;

    bool onCelsToFahren = true;

    while (onCelsToFahren == true)
    {    
        std::cin >> cfChoice;

        if (cfChoice == "1")
        {
            clearScreen();

            double celsUnit;

            std::cout << "Enter the amount of celsius you would like to convert to fahrenheit." << std::endl;
            std::cin >> celsUnit;

            double fahrenUnit = (celsUnit * 9) / 5 + 32;

            std::cout << std::setprecision(4) << "Converted value from celsius to fahrenheit: " << fahrenUnit << " °F" << std::endl;
        }
        else if (cfChoice == "2")
        {
            clearScreen();

            double fahrenUnit;

            std::cout << "Enter the amount of fahrenheit you would like to convert to celsius." << std::endl;
            std::cin >> fahrenUnit;

            double celsUnit = (fahrenUnit - 32) * 5 / 9;

            std::cout << std::setprecision(4) << "Converted value from fahrenheit to celsius: " << celsUnit << " C°" << std::endl;
        }
        else if (cfChoice == "3")
        {
            onCelsToFahren = false;
            return;
        }
        else
        {
            std::cout << "Please choose a valid option!" << std::endl; 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }   
}

void clearScreen()
{
    std::cout << "\033[2J\033[u";
}