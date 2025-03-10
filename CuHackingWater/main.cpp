#include "defs.h"

int main()
{
    drinkerType d1;
    int active, timeSinceWater, palmBay;
    float weight, numWorkouts, numGlasses, amtCaffine, amtBooze, workoutTime;

    do
    {
        printf("\nEnter your weight in lbs:\n");
        scanf_s("%f", &weight);
        if(weight <= 0)
        {
            printf("Please enter a valid weight!");

        }
        d1.weight = weight;
    } while (weight <= 0);
    

    do
    {
        printf("\nEnter how many times have you excercized this week: \n");
        scanf_s("%f", &numWorkouts);
        if (numWorkouts < 0) {
            printf("Please enter a valid number!");
        }
    } while (numWorkouts < 0);

    do
    {
        if (numWorkouts < 2) {
            active = 0;
            workoutTime = 0;
        }
        else {
            active = 1;
            printf("\nEnter how long your average workout is in minutes:\n");
            scanf_s("%f", &workoutTime);

            if (workoutTime < 0) {
                printf("Please enter a valid number!");
            }
            else {
                d1.timeWorkOut = workoutTime;
            }
        }
    } while (workoutTime < 0);

    do
    {
        printf("\nEnter how many glasses of water you have drunk today: \n");
        scanf_s("%f", &numGlasses);
        if (numGlasses < 0) {
            printf("Please enter a valid number!");
        }
    } while (numGlasses < 0);

    do
    {
        printf("\nEnter how long ago you last drank water: \n");
        scanf_s("%i", &timeSinceWater);
        if (timeSinceWater < 0) {
            printf("Please enter a valid number!");
        }
    } while (timeSinceWater < 0);

    do
    {
        printf("\nEnter how many caffinated drinks you have consumed today: \n");
        scanf_s("%f", &amtCaffine);
        if (amtCaffine < 0) {
            printf("Please enter a valid number!");
        }
        else {
            d1.caffine = amtCaffine;
        }
    } while (amtCaffine < 0);

    do
    {
        printf("\nEnter how many alcoholic drinks you have consumed today: \n");
        scanf_s("%f", &amtBooze);
        if (amtBooze < 0) {
            printf("Please enter a valid number!");
        }
        else {
            printf("Did you drink palm bays? Enter 1 for yes or 2 for no:\n"); //We don't stand palm bays
            scanf_s("%i", &palmBay);
            if (palmBay == 1) {
                printf("Error. Cannot help people with bad taste!");
            }
            else {
                d1.alcholo = amtBooze;
            }
        }
    } while (amtBooze < 0);
    //Functions Calls
    waterCal(&d1);
    printfun(&d1);
    nextCup(timeSinceWater, numGlasses, d1.total);
    dayilyTracker(&d1);
    funFacts();
    
    return 0;
}
