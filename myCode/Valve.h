#ifndef VALVE_H
#define VALVE_H

/**
 * @brief Manages the opening and closing of a valve based on the status of the heating system.
 */
class Valve {
private:
    bool isOpen = false;

public:
    /**
     * @brief Constructor for the Valve class.
     */
    Valve();

    /**
     * @brief Opens the valve.
     */
    void open();

    /**
     * @brief Closes the valve.
     */
    void close();

    /**
     * @brief Gets the state of the valve.
     * @return True if the valve is open, false if it is closed.
     */
    bool isOpenState() const;

    /**
     * @brief Destructor for the Valve class.
     */
    ~Valve();
};

#endif // VALVE_H
