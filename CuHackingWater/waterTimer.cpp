#include "defs.h"

/// <summary>
/// Tells the user when the next time they should consume water
/// </summary>
/// <param name="timeSinceWater">user input, last time they consumed water</param>
/// <param name="numGlasses">user input, # of glasses water dranken today</param>
/// <param name="glassesPerDay">average number of glasses to consume</param>
void nextCup(int timeSinceWater, int numGlasses, int glassesPerDay) {
    int timeBetweenCups, timeTillDrink;

    timeBetweenCups = glassesPerDay / (16 * 60);
    timeTillDrink = timeBetweenCups - timeSinceWater;

    if (numGlasses >= glassesPerDay) {
        printf("\n**********************************************");
        printf("You have already drank enough water today! \n");
    }
    else {
        if (timeSinceWater > timeBetweenCups) {
            printf("\n*******************");
            printf("Drink water now!\n");
        }
        else {
            printf("\n*********************************************************");
            printf("You need to drink water in %i minutes! \n", timeTillDrink);
        }
    }

}
