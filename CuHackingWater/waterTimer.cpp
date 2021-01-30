#include "defs.h"

//Calcs how long until you should next drink water
void nextCup(int timeSinceWater, int numGlasses, int glassesPerDay) {
    int timeBetweenCups, timeTillDrink;

    timeBetweenCups = glassesPerDay / (16 * 60);
    timeTillDrink = timeBetweenCups - timeSinceWater;

    if (numGlasses >= glassesPerDay) {
        printf("You have already drank enough water today! \n");
    }
    else {
        if (timeSinceWater > timeBetweenCups) {
            printf("Drink water now!");
        }
        else {
            printf("You need to drink water in %i minutes! \n", timeTillDrink);
        }
    }

}