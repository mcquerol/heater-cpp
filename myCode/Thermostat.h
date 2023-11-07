// Thermostat.h
#ifndef THERMOSTAT_H
#define THERMOSTAT_H

/**
 * @brief Manages the desired temperature in the system.
 */
class Thermostat {
private:
    float desiredTemperature = 0.0;

public:
    /**
     * @brief Constructor for the Thermostat class.
     */
    Thermostat();

    /**
     * @brief Gets the desired temperature.
     * @return The desired temperature.
     */
    float getDesiredTemperature() const;

    /**
     * @brief Sets a new desired temperature.
     * @param newTemperature The new desired temperature.
     */
    void setDesiredTemperature(float newTemperature);

    /**
     * @brief Destructor for the Thermostat class.
     */
    ~Thermostat();
};

#endif // THERMOSTAT_H
