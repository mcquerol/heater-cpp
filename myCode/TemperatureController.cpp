// TemperatureController.cpp
#include "TemperatureController.h"

TemperatureController::TemperatureController(TemperatureSensor& tempSensor, Thermostat& thermostat, HeatingElement& heatingElement, Valve& valve, Display& display)
    : temperatureSensor(tempSensor), thermostat(thermostat), heatingElement(heatingElement), valve(valve), display(display) {
    // Initialization and configuration...
}

void TemperatureController::adjustTemperature()
{
    // Implementation...
    float currentTemp = temperatureSensor.getTemperature();
    float desiredTemp = thermostat.getDesiredTemperature();

    // Adjust temperature based on the desired temperature and current conditions
    // Example logic: If currentTemp < desiredTemp, turn on the heating element; otherwise, turn it off
    if (currentTemp < desiredTemp) {
        heatingElement.turnOn();
        valve.open();
        thermostat.setDesiredTemperature(currentTemp + 1.0);
    } else {
        heatingElement.turnOff();
        valve.close();
        thermostat.setDesiredTemperature(currentTemp - 1.0);
    }

    // Show current and desired temperatures on the display
    display.showTemperature(currentTemp, desiredTemp);
}

TemperatureController::~TemperatureController()
{
    // Cleanup, if needed...
}
