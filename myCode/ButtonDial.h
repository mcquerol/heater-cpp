// ButtonDial.h
#ifndef BUTTON_DIAL_H
#define BUTTON_DIAL_H

/**
 * @brief Represents a button/dial as a user interface for adjusting settings.
 */
class ButtonDial {
private:
    float setting;

public:
    /**
     * @brief Constructor for the ButtonDial class.
     */
    ButtonDial();

    /**
     * @brief Gets the current setting.
     * @return The current setting.
     */
    float getSetting() const;

    /**
     * @brief Sets a new setting.
     * @param newSetting The new setting.
     */
    void setSetting(float newSetting);

    /**
     * @brief Destructor for the ButtonDial class.
     */
    ~ButtonDial();
};

#endif // BUTTON_DIAL_H
