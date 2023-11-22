#include "Heater.h"

/**
 * @file Heater.cpp
 * @brief Implementation file for the Heater class.
 */

/**
 * @brief Activates the heating element.
 */
void Heater::turnOn() {
    heatingStatus = true;
}

/**
 * @brief Deactivates the heating element.
 */
void Heater::turnOff() {
    heatingStatus = false;
}
