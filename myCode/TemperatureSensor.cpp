#include "TemperatureSensor.h"

/**
 * @file TemperatureSensor.cpp
 * @brief Implementation file for the TemperatureSensor class.
 */

//TODO - constructor doxygen
TemperatureSensor::TemperatureSensor() : currentTemperature(0.0)
{
    // Constructor to initialize currentTemperature
}

/**
 * @brief Retrieves the current temperature.
 * @return The current temperature.
 */
float TemperatureSensor::getTemperature() const
{
    return currentTemperature;
}

