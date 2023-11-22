#ifndef SAFETY_MONITOR_H
#define SAFETY_MONITOR_H

/**
 * @class SafetyMonitor
 * @brief Represents the safety monitor component of the heating controller.
 */
class SafetyMonitor {
public:
    /**
     * @brief Checks if the system is operating within safe parameters.
     * @return True if the system is safe, false otherwise.
     */
    bool checkSafety() const;

private:
    bool safetyStatus; /**< Safety status (safe/unsafe). */
};

#endif // SAFETY_MONITOR_H
