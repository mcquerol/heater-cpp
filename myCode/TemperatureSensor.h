#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

/**
 * @class TemperatureSensor
 * @brief Represents the temperature sensor component of the heating controller.
 */
class TemperatureSensor {
public:
    /**
     * @brief Retrieves the current temperature.
     * @return The current temperature.
     */
    float getTemperature() const;

private:
    float currentTemperature; /**< The current temperature. */
};

#endif // TEMPERATURE_SENSOR_H
