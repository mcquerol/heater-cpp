#include "TemperatureSensor.h"
#include "Thermostat.h"
#include "Heater.h"
#include "UserInterface.h"
#include "PowerSupply.h"
#include "SafetyMonitor.h"
#include "TemperatureController.h"

int main() {
    TemperatureSensor sensor;
    Thermostat thermostat;
    Heater heater;
    UserInterface ui;
    PowerSupply powerSupply;
    SafetyMonitor safetyMonitor;

    // Example: Set the initial desired temperature
    thermostat.setDesiredTemperature(25.0);

    // Example: User increases the desired temperature by 5 degrees
    float newDesiredTemperature = thermostat.getDesiredTemperature() + 5.0;
    thermostat.setDesiredTemperature(newDesiredTemperature);

    // Example: Create a TemperatureController
    TemperatureController controller(sensor, thermostat, heater);

    // Example: Adjust temperature based on the new desired temperature
    controller.adjustTemperature();

    return 0;
}
