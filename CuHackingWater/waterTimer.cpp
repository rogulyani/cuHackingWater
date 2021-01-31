#include "defs.h"

//Calcs how long until you should next drink water
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
