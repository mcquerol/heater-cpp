// Display.cpp
#include "Display.h"

Display::Display() {
    // Initialization and configuration...
}

void Display::showTemperature(float currentTemp, float desiredTemp) {
    std::cout << "Current Temperature: " << currentTemp << "\nDesired Temperature: " << desiredTemp << std::endl;
}

Display::~Display() {
    // Cleanup, if needed...
}
