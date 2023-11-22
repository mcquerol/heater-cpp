#include "PowerSupply.h"

/**
 * @file PowerSupply.cpp
 * @brief Implementation file for the PowerSupply class.
 */

/**
 * @brief Activates the power supply.
 */
void PowerSupply::turnOn() {
    powerStatus = true;
}

/**
 * @brief Deactivates the power supply.
 */
void PowerSupply::turnOff() {
    powerStatus = false;
}
