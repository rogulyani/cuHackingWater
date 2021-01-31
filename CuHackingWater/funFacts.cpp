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
		printf("\nThe Bay of Fundy's incredible tides are too strong for the Saint John River, forcing the waters to flow upstream twice a day, every day");
		break;
	}
	case(NS):
	{
		printf("\nNova Scotia’s Bay of Fundy is home to the world’s highest tides");
		break;
	}
	case(NL):
	{
		printf("\nAt low tide, watch the Saint John River crash through a narrow gorge and tumble into the harbour, but during high tide the same river flows in the opposite direction.");
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
		printf("\nAmong the worst floods in Canada's recent history was Manitoba's Red River flood of May 1997");
		break;
	}
	case(SK):
	{
		printf("\nLake Athabaska is the largest lake in the province, covering an area of 7,935 square kilometres.");
		break;
	}
	case(PE):
	{
		printf("\nThe majority of the Prince Edward Island (57%)  depend on private wells for their water supply.");
		break;
	}

	}
}
