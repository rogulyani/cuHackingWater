#include "Header.h"
#define ON 0
#define QC 1
#define 

void funFacts()
{
	char province;
	printf("Please input the two letter code of your province for a fun fact!!!\n");
	scanf_s("%c", &province);
	
	switch (province)
	{
	case (ON):
	{
		printf("\nOntario’s more than 250,000 lakes contain about one-fifth of the world's fresh water");
		break;
	}
	case(QC):
	{
		printf("\nQuebec has more dams than any other province with 333 large dams");
	}

	}
}