#ifndef T2_H
#define T2_H

// Define struct s_Person
union un_BatteryLife
{
    float fChargePercentage;  // Battery charge level represented as a percentage (0.0 to 100.0).
    float fChargeRatio;       // Battery charge level represented as a ratio(0.0 to 1.0).
    float fRemainingCapacity; // Estimated remaining battery capacity in Wh.
    float fRemainingHours;    // Estimated remaining battery life in hours.
};

/**
 * @brief Ask the value of battery charge
 *
 * @param percentage Battery charge info
 *
 * @return void
 */
void askBatteryInfo(int *percentage);

/**
 * @brief Convert and print estimated remaining battery life in hours
 *
 * @param percentage  Battery charge info
 *
 * @return void
 */
void convertToHours(int *percentage);

#endif
