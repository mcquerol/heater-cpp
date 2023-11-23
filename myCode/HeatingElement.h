#ifndef HEATINGELEMENT_H
#define HEATINGELEMENT_H

/**
 * @class Heater
 * @brief Represents the heater component of the heating controller.
 */
class HeatingElement {
public:
    /**
     * @brief Activates the heating element.
     */
    void turnOn();

    /**
     * @brief Deactivates the heating element.
     */
    void turnOff();

private:
    bool heatingStatus; /**< Heating status (on/off). */
};

#endif // HEATER_H
