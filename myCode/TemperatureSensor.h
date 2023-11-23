#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

/**
 * @class TemperatureSensor
 * @brief Represents the temperature sensor component of the heating controller.
 */
class TemperatureSensor {
public:

	/**
	 * @brief Empty constructor for the TemepratureSensor class, sets currentTemperature = 0.0;
	 *
	 */
	TemperatureSensor();

    /**
     * @brief Retrieves the current temperature.
     * @return The current temperature.
     */
    float getTemperature() const;


private:
    float currentTemperature; /**< The current temperature. */
};

#endif // TEMPERATURE_SENSOR_H
