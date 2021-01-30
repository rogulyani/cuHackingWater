#include "defs.h" 

void printfun(drinkerType* ret )
{
	if (ret->caffine != NULL)
	{
		printf("The amount added to your total based on your cups of caffine is: %p \n", ret->caffine);
	}
	if (ret->alcholo != NULL)
	{
		printf("The amount add to your total based on your alcohol consumption is %p \n", ret->alcholo);
	}
	if (ret->timeWorkOut != NULL)
	{
		printf("The amount add to your total based on your time worked out is %p \n", ret->timeWorkOut);
	}

	printf("The total amount of water you should be consuming is: %p\n", ret->total);
}
