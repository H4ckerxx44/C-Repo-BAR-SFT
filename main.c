#include <stdlib.h>
#include <stdio.h>


int main()
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
}

float price_per_year(float wattage, float hours_a_day, float days_a_year, float price_per_kwh)
{
	float usage_wh = wattage * hours_a_day * days_a_year;
	float usage_kwh = usage_wh / 1000;
	float p = usage_kwh * price_per_kwh;
	return printf("Consumption per year \nPower used: %fWh (%fkWh)\nPrice: %.2f%€", usage_wh, usage_kwh, p);
}
