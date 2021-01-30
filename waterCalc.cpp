#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>
#include <stdio.h>
using namespace std;

float waterCalc(float weight,int time, int caffine, int alchohol)
{
	float ret = weight * 2 / 3;
	if  (time != NULL)
	{
		float waterPlus = addWater(time);
		ret = ret + waterPlus;
	}
	if (caffine != NULL)
	{
		float waterPlus2 = AddMore(caffine);
		ret = ret + waterPlus2;
	}
	if (alchohol != NULL)
	{
		float waterPlus3 = AddMore(alchohol);
		ret = ret + waterPlus3;
	}
	return ret;
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