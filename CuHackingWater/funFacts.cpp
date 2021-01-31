#include "defs.h"
#define ON 0
#define QC 1
#define NB 2
#define	NS 3
#define NL 4
#define AL 5
#define BC 6
#define MB 7
#define SK 8
#define PE 9

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
		break;
	}
	case(NB):
	{
		printf("\n");
		break;
	}
	case(NS):
	{
		printf("\nNova Scotia’s Bay of Fundy is home to the world’s highest tides");
		break;
	}
	case(NL):
	{
		printf("\n");
		break;
	}
	case(AL):
	{
		printf("\n20% of the world’s drinking water is in Canada, but Alberta accounts for only 2.2% of Canada’s fresh water");
		break;
	}
	case(BC):
	{
		printf("\nHenderson Lake, in British Columbia, receiving the most annual precipitation in Canada, gets 6,655 millimetres of precipitation each year.");
		break;
	}
	case(MB):
	{
		printf("\n");
		break;
	}
	case(SK):
	{
		printf("\n");
		break;
	}
	case(PE):
	{
		printf("\nThe majority of the Prince Edward Island (57%)  depend on private wells for their water supply.");
		break;
	}

	}
}