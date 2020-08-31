#include <stdio.h>
#include <stdlib.h>

double vat = 16;
double total;


double main()
{
	double item_array[4] = {19.99, 24.99, 4.99, 99.99};
	for (int n = 0; n < 4; n++)
		total = total + item_array[n];
		
	double tax = (total / 100) * vat;
	double subtotal = total - tax;
	printf("\n\n");
	printf("Subtotal: %.2f Euro\n", subtotal);
	printf("Taxes: %.2f Euro\n", tax);
	printf("Total: %.2f Euro\n", total);
	printf("\n");
}
