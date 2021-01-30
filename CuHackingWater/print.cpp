#include "defs.h" 

void printfun(drinkerType* ret)
{
	float caf = ret->caffine * 8;
	float acl = ret->alcholo * 8;
	if (ret->caffine != NULL)
	{
		printf("The amount added to your total based on your cups of caffine is: %f in ounces\n", caf);
	}
	if (ret->alcholo != NULL)
	{
		printf("The amount add to your total based on your alcohol consumption is %f in ounces \n", acl);
	}

	printf("The total amount of water you should be consuming is: %f in ounces\n", ret->total);
}