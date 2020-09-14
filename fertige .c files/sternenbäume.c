#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\t %s\n\n", "Ausgabe von Sternenbaeumen");
	const char* four = "Sternenbaum mit vier Zeilen";
	const char* five = "Sternenbaum mit fuenf Zeilen";
	printf("\t%s\n", four);
	printf("\t\t    *\n");
	printf("\t\t   ***\n");
	printf("\t\t  *****\n");
	printf("\t\t *******\n");

	printf("\t%s\n", five);
	printf("\t\t    *\n");
	printf("\t\t   ***\n");
	printf("\t\t  *****\n");
	printf("\t\t *******\n");
	printf("\t\t*********\n");
}
