#include "defs.h"

/// <summary>
/// Tells the user the amount of water they should be drinking
/// for each hour of their day
/// </summary>
/// <param name="ret"> calls in the struct</param>
void dayilyTracker(drinkerType* ret)
{
	int wakeUp = 0;
	int bedTime = 0;
	int plus = 1;

	printf("\n****************************************************************************");
	printf("\nWe are now can break down your day based on when you wake up & go to sleep");
	printf("\n Please input your wakeup time in 24 hour time now: ");
	scanf_s("%i", &wakeUp);
	printf("\n Please input your bedtime in 24 hour time now: ");
	scanf_s("%i", &bedTime);

	unsigned int totalDay = bedTime - wakeUp;
	float hourly = ret->total / totalDay;
	printf("You be drinking: %f per hour!\n", hourly);

	for (int i = wakeUp+1; i < bedTime; i++)
	{
		float totalToDate = hourly * plus;
		if (i < 12)
		{
			printf("You should have consumed %f ounces by %i AM.\n",totalToDate, i);
		}
		else if (i >= 12)
		{
			printf("You should have consumed %f ounces by %i PM.\n", totalToDate, i);
		}
		printf("\n");
		plus++;
	}

}