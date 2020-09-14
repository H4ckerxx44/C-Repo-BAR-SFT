#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Überschrift
	printf("\t %s\n\n", "Ausgabe von Sternenbaeumen");
	
	// Variablen für die Überschriften
	const char* four = "Sternenbaum mit vier Zeilen";
	const char* five = "Sternenbaum mit fuenf Zeilen";

	// Erster Baum
	printf("\t%s\n", four);
	printf("\t\t    *\n");
	printf("\t\t   ***\n");
	printf("\t\t  *****\n");
	printf("\t\t *******\n");

	// Zweiter Baum
	printf("\t%s\n", five);
	printf("\t\t    *\n");
	printf("\t\t   ***\n");
	printf("\t\t  *****\n");
	printf("\t\t *******\n");
	printf("\t\t*********\n");
}
