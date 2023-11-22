#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

/**
 * @class UserInterface
 * @brief Represents the user interface component of the heating controller.
 */
class UserInterface {
public:
    /**
     * @brief Retrieves user input for desired temperature.
     * @return User input for desired temperature.
     */
    float getUserInput() const;

    /**
     * @brief Displays current and desired temperatures.
     * @param currentTemp The current temperature.
     * @param desiredTemp The desired temperature.
     */
    void displayTemperature(float currentTemp, float desiredTemp) const;

private:
    float userInput; /**< User input for desired temperature. */
};

#endif // USER_INTERFACE_H
