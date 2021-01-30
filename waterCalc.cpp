#include "defs.h" 

float waterCal(struct drinker* ret)
{
	ret->total = ret->weight * 2 / 3;
	if (ret->alcholo != NULL)
	{
		ret->alcholo = AddMore(ret->alcholo);
		ret->total += ret->total + ret->alcholo;
	}
	if (ret->caffine != NULL)
	{
		ret->caffine = AddMore(ret->caffine);
		ret->total += ret->caffine;
	}
	if (ret->timeWorkOut != NULL)
	{
		ret->timeWorkOut = addWater(ret->timeWorkOut);
		ret->total += ret->total + ret->timeWorkOut;
	}
	return 0;
}

float addWater(int time)
{
	float counter = 0;
	for (int i = 0; i < time; i + 5)
	{
		counter += 2.4;
	}
	return counter;
}

float AddMore(int number)
{
	float counter = 0;
	for (int i = 0; i < number; i++)
	{
		counter++;
	}
	return counter;
}
