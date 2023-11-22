#ifndef POWER_SUPPLY_H
#define POWER_SUPPLY_H

/**
 * @class PowerSupply
 * @brief Represents the power supply component of the heating controller.
 */
class PowerSupply {
public:
    /**
     * @brief Activates the power supply.
     */
    void turnOn();

    /**
     * @brief Deactivates the power supply.
     */
    void turnOff();

private:
    bool powerStatus; /**< Power status (on/off). */
};

#endif // POWER_SUPPLY_H
