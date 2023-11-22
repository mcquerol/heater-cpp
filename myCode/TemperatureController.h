#ifndef TEMPERATURE_CONTROLLER_H
#define TEMPERATURE_CONTROLLER_H

#include "TemperatureSensor.h"
#include "Thermostat.h"
#include "Heater.h"

/**
 * @class TemperatureController
 * @brief Represents the temperature controller component of the heating system.
 */
class TemperatureController {
public:
    /**
     * @brief Constructor for TemperatureController.
     * @param sensor Reference to the temperature sensor.
     * @param thermostat Reference to the thermostat.
     * @param heater Reference to the heater.
     */
    TemperatureController(TemperatureSensor& sensor, Thermostat& thermostat, Heater& heater);

    /**
     * @brief Adjusts the temperature based on the thermostat settings.
     */
    void adjustTemperature();

private:
    TemperatureSensor& temperatureSensor; /**< Reference to the temperature sensor. */
    Thermostat& thermostat;               /**< Reference to the thermostat. */
    Heater& heater;                       /**< Reference to the heater. */
};

#endif // TEMPERATURE_CONTROLLER_H
