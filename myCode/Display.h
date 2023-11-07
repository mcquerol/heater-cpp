// Display.h
#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>

/**
 * @brief Represents a display in the system.
 */
class Display {
public:
    /**
     * @brief Constructor for the Display class.
     */
    Display();

    /**
     * @brief Displays the current and desired temperatures.
     * @param currentTemp The current temperature.
     * @param desiredTemp The desired temperature.
     */
    void showTemperature(float currentTemp, float desiredTemp);

    /**
     * @brief Destructor for the Display class.
     */
    ~Display();
};

#endif // DISPLAY_H
