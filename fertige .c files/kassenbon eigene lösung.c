#include <stdio.h>
#include <stdlib.h>

// Deklaration und Initialisieren von vat
double vat = 16;

// Deklaration von total
double total;

/* main function */
double main()
{
	// Array aus Preisen
	double item_array[4] = {19.99, 24.99, 4.99, 99.99};
	
	// For-loop zum aufaddieren des array's
	for (int n = 0; n < 4; n++)
		total = total + item_array[n];
	
	// Tax
	double tax = (total / 100) * vat;

	// Subtotal
	double subtotal = total - tax;
	
	// Ausgabe von Ergebnissen
	printf("\n\nSubtotal: %.2f Euro\n", subtotal);
	printf("Taxes: %.2f Euro\n", tax);
	printf("Total: %.2f Euro\n\n", total);
	
	// gibt 0.0 zurück
	return 0.0;
}
