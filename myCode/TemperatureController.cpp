#include "TemperatureController.h"

/**
 * @file TemperatureController.cpp
 * @brief Implementation file for the TemperatureController class.
 */

/**
 * @brief Constructor for TemperatureController.
 * @param sensor Reference to the temperature sensor.
 * @param thermostat Reference to the thermostat.
 * @param heater Reference to the heater.
 */
TemperatureController::TemperatureController(TemperatureSensor& sensor, Thermostat& thermostat, Heater& heater)
    : temperatureSensor(sensor), thermostat(thermostat), heater(heater) {}

/**
 * @brief Adjusts the temperature based on the thermostat settings.
 */
void TemperatureController::adjustTemperature() {
    float currentTemp = temperatureSensor.getTemperature();
    float desiredTemp = thermostat.getDesiredTemperature();

    // Adjust temperature based on the desired temperature and current conditions
    // Example logic: If currentTemp < desiredTemp, turn on the heater; otherwise, turn it off
    if (currentTemp < desiredTemp) {
        heater.turnOn();
    } else {
        heater.turnOff();
    }
}
