#include <stdlib.h>
#include <stdio.h>


int main()
{
	price_per_year(125.0, 24.0, 365.0, 0.28);
	return 0.0;
}

float price_per_year(float wattage, int hours_a_day, int days_a_year, float price_per_kwh)
{
	float usage_wh = wattage * hours_a_day * days_a_year;
	float usage_kwh = usage_wh / 1000;
	float p = usage_kwh * price_per_kwh;
	printf("Power used: %.2fWh (%.2fkWh)\nPrice: %.2f Euro", usage_wh, usage_kwh, p);
	return 0.0;
}

float info()
{
	float wattage = 0;
	float hours_a_day = 0;
	float days_a_year = 0;
	float price_per_kwh = 0;

	// Variable setting
	printf_s("Wattage: ");
	scanf_s("%f", &wattage);

	// Variable setting	
	printf_s("\nHours a day: ");
	scanf_s("%f", &hours_a_day);

	// Variable setting	
	printf_s("\nDays a year: ");
	scanf_s("%f", &days_a_year);

	// Variable setting
	printf_s("\nPrice per kWh: ");
	scanf_s("%f", &price_per_kwh);

	// Print statements
	printf("Wattage: %f\n", wattage);
	printf("Hours a day: %f\n", hours_a_day);
	printf("Days a year: %f\n", days_a_year);
	printf("Price per kWh: %f\n", price_per_kwh);
	return 0.0;
}
