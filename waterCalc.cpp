#include "defs.h" 

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

float addWater(int time)
{
	float counter = 0;
	for (int i = 0; i < time; i+=5)
	{
		counter += (float)2.4;
	}
	return counter;
}
