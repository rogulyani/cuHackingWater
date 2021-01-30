#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>
struct water
{
	int alcholo;
	int caffine;
	int timeWorkOut;
	float weight;
	float total;
};

struct drinkWater
{
	int time;
	int glasses;
};

float waterCalc(float, int, int, int);
float addWater(int);
float AddMore(int);
