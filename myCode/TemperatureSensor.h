#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

/**
 * @brief Simulates a temperature sensor in the system.
 */
class TemperatureSensor {
private:
    float currentTemperature;

public:
    /**
     * @brief Constructor for the TemperatureSensor class.
     */
    TemperatureSensor();

    /**
     * @brief Gets the current temperature.
     * @return The current temperature.
     */
    float getTemperature() const;

    /**
     * @brief Sets the current temperature.
     * @param newTemperature The new current temperature.
     */
    void setTemperature(float newTemperature);

    /**
     * @brief Destructor for the TemperatureSensor class.
     */
    ~TemperatureSensor();
};

#endif // TEMPERATURE_SENSOR_H
