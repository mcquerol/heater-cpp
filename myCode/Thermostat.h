#ifndef THERMOSTAT_H
#define THERMOSTAT_H

/**
 * @class Thermostat
 * @brief Represents the thermostat component of the heating controller.
 */
class Thermostat {
public:
    /**
     * @brief Retrieves the desired temperature setting.
     * @return The desired temperature setting.
     */
    float getDesiredTemperature() const;

    /**
     * @brief Sets a new desired temperature.
     * @param newTemperature The new desired temperature.
     */
    void setDesiredTemperature(float newTemperature);

private:
    float desiredTemperature; /**< The desired temperature setting. */
};

#endif // THERMOSTAT_H
