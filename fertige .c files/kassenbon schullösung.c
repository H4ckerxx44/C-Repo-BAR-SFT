#include <stdlib.h>
#include <stdio.h>

int main()
{
	int loop;
	float total_loop;
	float total_array;
	float subtotal_loop;
	float subtotal_array;
	float tax_loop;
	float tax_array;
	
	float vat = 16;
	float item_array[4] = {4.99, 19.99, 39.99, 249.99};
	
	total_array = item_array[0] + item_array[1] + item_array[2] + item_array[3];
	for(loop = 3; loop >= 0;  loop--)
	{
		total_loop = total_loop + item_array[loop];
		printf("FOR LOOP: %f\n", total_loop);
	}
	
	tax_loop = (total_loop / 100) * vat;
	tax_array = (total_array / 100) * vat;
	subtotal_loop = total_loop - tax_loop;
	subtotal_array = total_array - tax_array;
	
	printf("subtotal (loop): %.2f Euro\n", subtotal_loop);
	printf("subtotal (array): %.2f Euro\n\n", subtotal_array);
	printf("taxes (loop): %.2f Euro\n", tax_loop);
	printf("taxes (array): %.2f Euro\n\n", tax_array);
	printf("total (loop): %.2f Euro\n", total_loop);
	printf("total (array): %.2f Euro\n", total_array);
	return 0;
}

