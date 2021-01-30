#include "defs.h" 

void printfun(drinkerType* ret )
{
	if (ret->caffine != NULL)
	{
		printf("The amount added to your total based on your cups of caffine is: %i \n", ret->caffine);
	}
	if (ret->alcholo != NULL)
	{
		printf("The amount add to your total based on your alcohol consumption is %i \n", ret->alcholo);
	}
	if (ret->timeWorkOut != NULL)
	{
		printf("The amount add to your total based on your time worked out is %i \n", ret->timeWorkOut);
	}

	printf("The total amount of water you should be consuming is: %f\n", ret->total);
}
