#pragma once
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>

typedef struct
{
	int alcholo;
	int caffine;
	int timeWorkOut;
	float weight;
	float total;
}drinkerType;

void waterCal(drinkerType*);
float addWater(int);
float AddMore(int);
void nextCup(int, int, int);
void initDrinker(float, int, int, int, drinkerType*);
void printfun(drinkerType*);
