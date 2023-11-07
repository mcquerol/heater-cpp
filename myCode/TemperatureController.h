// TemperatureController.h
#ifndef TEMPERATURE_CONTROLLER_H
#define TEMPERATURE_CONTROLLER_H

#include "TemperatureSensor.h"
#include "Thermostat.h"
#include "HeatingElement.h"  // Include the header for HeatingElement
#include "Valve.h"
#include "Display.h"

/**
 * @brief Controls the temperature and manages the heating system.
 */
class TemperatureController {
private:
    TemperatureSensor& temperatureSensor;
    Thermostat& thermostat;
    HeatingElement& heatingElement;  // Add the reference for HeatingElement
    Valve& valve;
    Display& display;

public:
    /**
     * @brief Constructor for the TemperatureController class.
     * @param tempSensor Reference to the temperature sensor.
     * @param thermostat Reference to the thermostat.
     * @param heatingElement Reference to the heating element.
     * @param valve Reference to the valve.
     * @param display Reference to the display.
     */
    TemperatureController(TemperatureSensor& tempSensor, Thermostat& thermostat, HeatingElement& heatingElement, Valve& valve, Display& display);

    /**
     * @brief Adjusts the temperature based on the desired temperature and current conditions.
     */
    void adjustTemperature();

    /**
     * @brief Destructor for the TemperatureController class.
     */
    ~TemperatureController();
};

#endif // TEMPERATURE_CONTROLLER_H
