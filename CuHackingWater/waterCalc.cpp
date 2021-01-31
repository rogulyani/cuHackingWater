#include "defs.h" 

/// <summary>
/// Finds the user dayily average of water needed to be consumed
/// </summary>
/// <param name="ret"> pointer to the struct </param>
void waterCal(drinkerType* ret)
{
	ret->total = ret->weight * 0.6;
	ret->total += ret->caffine * 8;
	ret->total += ret->alcholo * 8;

	if (ret->timeWorkOut != NULL)
	{
		ret->timeWorkOut = addWater(ret->timeWorkOut);
		ret->total += ret->timeWorkOut;
	}

}

/// <summary>
/// Determines the added water need for how long they have worked out
/// </summary>
/// <param name="time">the length of the workout</param>
/// <returns>how many ounces of added water needed </returns>
float addWater(int time)
{
	float counter = 0;
	for (int i = 0; i < time; i += 5)
	{
		counter += (float)2.4;
	}
	return counter;
}
