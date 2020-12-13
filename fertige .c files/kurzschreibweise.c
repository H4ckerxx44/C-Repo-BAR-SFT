// Importieren der Standart-Bibliotheken
#include <stdio.h>
#include <stdlib.h>


// Initialisierung der "main" function die type "int" zurueckgibt
int main()
{		
	// Abstand von oben Links
	printf("\n\n\n");
	
	// Initialisierung "zahl" vom type "int"
	int zahl = 0;

	// Initialisierung "result" vom type "int" mit Wert = 2
	int result = 2;

	// Rechnung 1 + Ausgabe des ersten Ergebnisses
	zahl = (500 - 100 * (2 + 1)) * 5;
	printf("	1. %d\n", zahl);
	
	// Rechnung 2 + Ausgabe des zweiten Ergebnisses
	zahl = (zahl - 700)/ 3;
	printf("	2. %d\n", zahl);
	
	// Rechnung 3 + Ausgabe des dritten Ergebnisses
	zahl += 50 * 2;
	printf("	3. %d\n", zahl);
	
	// Rechnung 4 + Ausgabe des vieten Ergebnisses
	zahl *= 10 - 8;
	printf("	4. %d\n", zahl);
	
	// Rechnung 5 + Ausgabe des fuenften Ergebnisses
	zahl /= zahl - 200;
	printf("	5. %d\n", zahl);
	printf("-------------------------\n");

	if (result == zahl)
	{
		printf("   Richtige Loesung.");
	}
	else
	{
		printf("   Leider falsch.");
	}

	// Funktion gibt "0" zurueck
	return 0;
}
