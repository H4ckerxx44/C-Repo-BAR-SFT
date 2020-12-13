#include <stdlib.h>
#include <stdio.h>

/* main function */
int main()
{
	// Deklaration von Variablen
	int loop;
	float total;
	float subtotal;
	float tax;
	
	// VAT = 16% mwst
	float vat = 16;
	
	// Array aus preisen
	float item_array[4] = {4.99, 19.99, 39.99, 249.99};
	
	/* For-loop um das Array aufzuaddieren */
	for(loop = 3; loop >= 0;  loop--)
	{
		// Gesamtbetrag des Array's
		total = total + item_array[loop];
	}
	
	// Tax
	tax = (total / 100) * vat;
	
	// Subtotal
	subtotal = total - tax;
	
	// Ausgabe von Ergebnissen
	printf("\n\nsubtotal (loop): %.2f Euro\n", subtotal);
	printf("taxes (loop): %.2f Euro\n", tax);
	printf("total (loop): %.2f Euro\n", total);
	
	// gibt 0 zurück
	return 0;
}

