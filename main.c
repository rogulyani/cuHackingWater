#include "defs.h"

int main(){

    struct drinker d1;
    int workoutTime, active, numWorkouts, numGlasses, timeSinceWater, amtCaffine, amtBooze, palmBay;
    float weight;

    printf("\nEnter your weight in lbs:\n");
    scanf("%f", &weight);

    if(weight<1){
        printf("Please enter a valid weight!");
        return;
    }
    else{
        d1.weight = weight;
    }

    printf("\nEnter how many times have you excercized this week: \n");
    scanf("%i", &numWorkouts);

    if(numWorkouts<0){
        printf("Please enter a valid number!");
        return;
    }
    

    if(numWorkouts<2){
        active = 0;
        workoutTime = 0;
    }
    else{
        active = 1;
        printf("\nEnter how long your average workout is in minutes:\n");
        scanf("%i", &workoutTime);

        if(workoutTime<0){
            printf("Please enter a valid number!");
            return;
        }
    }

    d1.timeWorkout = workoutTime;

    printf("\nEnter how many glasses of water you have drunk today: \n");
    scanf("%i", &numGlasses);

    if(numGlasses<0){
        printf("Please enter a valid number!");
        return;
    }

    printf("\nEnter how long ago you last drank water: \n");
    scanf("%i", &timeSinceWater);

    if(timeSinceWater<0){
        printf("Please enter a valid number!");
        return;
    }

    printf("\nEnter how many caffinated drinks you have consumed today: \n");
    scanf("%i", &amtCaffine);
    if(amtCaffine < 0){
        printf("Please enter a valid number!");
        return;
    }
    else{
        d1.caffine = amtCaffine;
    }

    printf("\nEnter how many alcoholic drinks you have consumed today: \n");
    scanf("%i", &amtBooze);
    if(amtBooze < 0){
        printf("Please enter a valid number!");
        return;
    }
    else{
        printf("Did you drink palm bays? Enter 1 for yes or 2 for no:\n");
        scanf("%i", &palmBay);
        if(palmBay == 1){
            printf("Error. Cannot help people with bad taste!");
        }
        else{
            d1.alcholo = amtBooze;
        }
    }


    //send to function



}
