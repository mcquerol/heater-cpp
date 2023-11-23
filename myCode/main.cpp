// main.cpp
#include "Timer.h"
#include "UserInterface.h"
#include "Thermostat.h"
#include "TemperatureSensor.h"
#include "Heater.h"
#include "TemperatureController.h"

#include <thread> //for simulation purposes
#include <iostream>

int main() {

    /*
     * Here is an example of how the main.cpp code would be structured
     * none of the methds are defined so there is no functionality, logic or output
     */

    UserInterface ui;
    Thermostat thermostat;
    TemperatureSensor tempSensor;
    Heater heater;
    PowerSupply powerSupply;
    Timer timer(5);  // Create a timer with a 5-second interval

    // Create TemperatureController with references to components
    TemperatureController tempController(tempSensor, thermostat, heater, powerSupply);

    std::cout << "Enter desired temperature: ";
    float desiredTemp;
    std::cin >> desiredTemp;

    // Set the desired temperature in the thermostat
    thermostat.setDesiredTemperature(desiredTemp);
    std::cout << "Desired Temperature: " << thermostat.getDesiredTemperature() << std::endl;

    timer.start(); //start the timer

    //increase the temperature until it reaches the desired temperature then stop the timer and turn of the power supply
    while (tempSensor.getTemperature() <= thermostat.getDesiredTemperature()) {
        // Display current and desired temperatures
        ui.displayTemperature(tempSensor.getTemperature(), thermostat.getDesiredTemperature());
        // Adjust temperature based on the new desired temperature
        tempController.adjustTemperature();
        // Simulate a delay between iterations
        std::this_thread::sleep_for(std::chrono::seconds(timer.getTick()));
    }

    timer.stop(); //stop the timer

    return 0;
}
