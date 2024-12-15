#include <stdio.h>
#include <string.h>
#include "T2.h"

void askBatteryInfo(int *percentage)
{
    printf("Insert remaining battery charge in percentage: ");
    scanf("%d", percentage);
}

void convertToHours(int *percentage)
{
    union un_BatteryLife batteryStats;
    batteryStats.fChargePercentage = *percentage;
    batteryStats.fChargeRatio = batteryStats.fChargePercentage / 100;
    batteryStats.fRemainingCapacity = batteryStats.fChargeRatio * 4;
    batteryStats.fRemainingHours = batteryStats.fRemainingCapacity / 0.15;
    printf("%.2f hours of battery remaining.", batteryStats.fRemainingHours);
}

int main(void)
{
    int percentage;
    printf("Program starting.\n");
    printf("Battery info:\n");
    printf(" - Capacity - 4000 mAh\n");
    printf(" - Average power consumption - 0.150 Wh\n");
    askBatteryInfo(&percentage);
    convertToHours(&percentage);
    printf("\nProgram ending.\n");
    return 0;
}
