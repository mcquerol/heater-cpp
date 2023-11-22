#include "TemperatureSensor.h"

/**
 * @file TemperatureSensor.cpp
 * @brief Implementation file for the TemperatureSensor class.
 */

/**
 * @brief Retrieves the current temperature.
 * @return The current temperature.
 */
float TemperatureSensor::getTemperature() const {
    return currentTemperature;
}
