#pragma once
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>

typedef struct
{
	float alcholo;
	float caffine;
	float timeWorkOut;
	float weight;
	float total;
}drinkerType;

void waterCal(drinkerType* ret);
float addWater(int);
void nextCup(int, int, int);
void initDrinker(float, float, float, float, drinkerType*);
void printfun(drinkerType* ret);
void dayilyTracker(drinkerType* ret);
