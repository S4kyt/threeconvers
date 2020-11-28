#include <iostream>
#include <cstdlib> // exit
#include <limits> // numeric limits, streamsize

#include "conv.h"

int main()
{
    std::cout << "This program is capable of performing 3 kinds of 'back and forth' conversions.\n" << std::endl;
    std::cout << "1. Meter <-> Feet " << std::endl;
    std::cout << "2. Kilogram <-> Stone" << std::endl;
    std::cout << "3. Celsius <-> Fahrenheit" << std::endl;
    std::cout << "4. Quit program" << std::endl;

    std::string menuChoice;
    bool isUsingProgram = true;

    while (isUsingProgram == true)
    {
        std::cin >> menuChoice;

        if (menuChoice == "1")
        {
            clearScreen();
            meterAndFeet();
        }
        else if (menuChoice == "2")
        {
            clearScreen();
            kgAndStone();
        }
        else if (menuChoice == "3")
        {
            clearScreen();
            celsiusAndFahren();
        }
        else if (menuChoice == "4")
        {
            isUsingProgram = false;
            //TODO: Quit functionality
        }
        else
        {
            std::cout << "Please choose a valid option!" << std::endl; 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return -1;
}