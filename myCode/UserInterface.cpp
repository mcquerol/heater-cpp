#include "UserInterface.h"
#include <iostream>
/**
 * @file UserInterface.cpp
 * @brief Implementation file for the UserInterface class.
 */

/**
 * @brief Retrieves user input for desired temperature.
 * @return User input for desired temperature.
 */
float UserInterface::getUserInput() const
{
    return userInput;
}

/**
 * @brief Sets user input for desired temperature.
 * @param input The user input for desired temperature.
 */
void UserInterface::setUserInput(float input)
{
    userInput = input;
}

/**
 * @brief Displays current and desired temperatures.
 * @param currentTemp The current temperature.
 * @param desiredTemp The desired temperature.
 */
void UserInterface::displayTemperature(float currentTemp, float desiredTemp) const
{
    //output current and desired temperatures
}
