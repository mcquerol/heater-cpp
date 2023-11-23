// main.cpp
#include "Thermostat.h"
#include "TemperatureSensor.h"
#include "TemperatureController.h"

#include <thread> // for simulation purposes
#include <iostream>

#include "ButtonDial.h"
#include "Display.h"
#include "HeatingElement.h"
#include "Valve.h"

int main() {
	/*
	 * this is an example of the structure of what the main.cpp would look like
	 * there is no functionality and no logic
	 */
    // Create components
    ButtonDial buttonDial;
    Display display;
    HeatingElement heatingElement;
    Valve valve;
    TemperatureSensor tempSensor;
    Thermostat thermostat;

    // Create TemperatureController with references to components
    TemperatureController tempController(tempSensor, thermostat, heatingElement, valve, display);

    std::cout << "Enter desired temperature: ";
    float desiredTemp;
    std::cin >> desiredTemp;

    // Set the desired temperature in the thermostat
    thermostat.setDesiredTemperature(desiredTemp);
    std::cout << "Desired Temperature: " << thermostat.getDesiredTemperature() << std::endl;

    // Increase the temperature until it reaches the desired temperature
    // then stop the simulation
    while (tempSensor.getTemperature() <= thermostat.getDesiredTemperature()) {
        // Display current and desired temperatures
        display.showTemperature(tempSensor.getTemperature(), thermostat.getDesiredTemperature());
        // Adjust temperature based on the new desired temperature
        tempController.adjustTemperature();
        // Simulate a delay between iterations
        std::this_thread::sleep_for(std::chrono::seconds(5)); // Assuming a 5-second interval
    }

    return 0;
}
