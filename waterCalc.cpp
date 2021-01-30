#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>
#include <stdio.h>
using namespace std;

float waterCalc(float weight,int time)
{
	float ret = weight * 2 / 3;
	if  (time != NULL)
	{
		float waterPlus = addWater(time);
		ret = ret + waterPlus;
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
