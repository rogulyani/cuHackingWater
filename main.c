#include "defs.h"

int main() {

    drinkerType d1;
    int workoutTime, active, numWorkouts, numGlasses, timeSinceWater, amtCaffine, amtBooze, palmBay;
    float weight;

    printf("\nEnter your weight in lbs:\n");
    scanf_s("%f", &weight);

    if (weight < 1) {
        printf("Please enter a valid weight!");
        return 0;
    }

    printf("\nEnter how many times have you excercized this week: \n");
    scanf_s("%i", &numWorkouts);

    if (numWorkouts < 0) {
        printf("Please enter a valid number!");
        return 0;
    }


    if (numWorkouts < 2) {
        active = 0;
        workoutTime = 0;
    }
    else {
        active = 1;
        printf("\nEnter how long your average workout is in minutes:\n");
        scanf_s("%i", &workoutTime);

        if (workoutTime < 0) {
            printf("Please enter a valid number!");
            return 0;
        }
    }

    printf("\nEnter how many glasses of water you have drunk today: \n");
    scanf_s("%i", &numGlasses);

    if (numGlasses < 0) {
        printf("Please enter a valid number!");
        return 0;
    }

    printf("\nEnter how long ago you last drank water: \n");
    scanf_s("%i", &timeSinceWater);

    if (timeSinceWater < 0) {
        printf("Please enter a valid number!");
        return 0;
    }

    printf("\nEnter how many caffinated drinks you have consumed today: \n");
    scanf_s("%i", &amtCaffine);
    if (amtCaffine < 0) {
        printf("Please enter a valid number!");
        return 0;
    }

    printf("\nEnter how many alcoholic drinks you have consumed today: \n");
    scanf_s("%i", &amtBooze);
    if (amtBooze < 0) {
        printf("Please enter a valid number!");
        return 0;
    }
    else {
        printf("Did you drink palm bays? Enter 1 for yes or 2 for no:\n");
        scanf_s("%i", &palmBay);
        if (palmBay == 1) {
            printf("Error. Cannot help people with bad taste!");
        }
    }

    initDrinker(weight, amtBooze, amtCaffine, workoutTime, &d1);

    waterCal(&d1);

    printfun(&d1);

    nextCup(timeSinceWater, numGlasses, d1.total);

    return 0;

}
