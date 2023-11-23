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
TemperatureController::TemperatureController(TemperatureSensor& tempSensor, Thermostat& thermostat, Heater& heater, PowerSupply& powerSupply)
    : temperatureSensor(tempSensor), thermostat(thermostat), heater(heater), powerSupply(powerSupply)
{

}

/**
 * @brief Adjusts the temperature based on the thermostat settings.
 */
void TemperatureController::adjustTemperature()
{
    float currentTemp = temperatureSensor.getTemperature();
    float desiredTemp = thermostat.getDesiredTemperature();

    // Adjust temperature based on the desired temperature and current conditions
    // Example logic: if currentTemp < desiredTemp, turn on the heater; otherwise, turn it off
    if (currentTemp <= desiredTemp) {
        heater.turnOn();
    } else {
        heater.turnOff();
    }

    // Perform actions related to the power supply
    // Example logic: if desired temperature has been reached, turn of the power
    if (currentTemp >= desiredTemp) {
        powerSupply.turnOff();
    } else {
        powerSupply.turnOn();
    }
}
