#include "Thermostat.h"

/**
 * @file Thermostat.cpp
 * @brief Implementation file for the Thermostat class.
 */

/**
 * @brief Retrieves the desired temperature setting.
 * @return The desired temperature setting.
 */
float Thermostat::getDesiredTemperature() const {
    return desiredTemperature;
}

/**
 * @brief Sets a new desired temperature.
 * @param newTemperature The new desired temperature.
 */
void Thermostat::setDesiredTemperature(float newTemperature) {
    desiredTemperature = newTemperature;
}
