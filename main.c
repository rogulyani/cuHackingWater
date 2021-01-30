#include "defs.h"

int main(){

    int age, workoutTime, active, numWorkouts, numGlasses, timeSinceWater;
    float weight, amtCaffine, amtBooze;

    printf("Enter your age:\n");
    scanf("%i", &age);

    if(age<0){
        printf("Please enter a valid age!");
        return;
    }

    printf("\nEnter your weight in lbs:\n");
    scanf("%f", &weight);

    if(weight<1){
        printf("Please enter a valid weight!");
        return;
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

    printf("\nEnter how many alcoholic drinks you have consumed today: \n");
    scanf("%i", &amtBooze);
    if(amtBooze < 0){
        printf("Please enter a valid number!");
        return;
    }


    //send to function



}
