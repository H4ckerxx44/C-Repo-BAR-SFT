#include <stdlib.h>
#include <stdio.h>

/* main function */
float main()
{
	// deklarieren der price_per_year function
	float price_per_year(float, int, int, float);
	
	// Aufrufen der price_per_year function
	price_per_year(125.0, 24, 365, 0.28);
	
	// gibt 0.0 zurück
	return 0.0;
}

/* Mathematischer Hintergrund der Rechnung */
float price_per_year(float wattage, int hours_a_day, int days_a_year, float price_per_kwh)
{
	// Verbrauch in Wattstunden
	float usage_wh = wattage * hours_a_day * days_a_year;
	
	// Verbrauch in Kilowattstunden
	float usage_kwh = usage_wh / 1000;
	
	// Verbauch * preis pro kwh = preis für verbrauch
	float p = usage_kwh * price_per_kwh;
	
	// Ausgabe von Ergebnissen
	printf("Power used: %.2fWh (%.2fkWh)\nPrice: %.2f Euro", usage_wh, usage_kwh, p);
	
	// gibt 0.0 zurück
	return 0.0;
}

/* Testen von scanf_s */
float info()
{
	// Deklaration und Initialisierung von Variablen mit Wert 0
	float wattage = 0;
	float hours_a_day = 0;
	float days_a_year = 0;
	float price_per_kwh = 0;

	// Überschreiben der Variable mit User-Input
	printf_s("Wattage: ");
	scanf_s("%f", &wattage);

	// Überschreiben der Variable mit User-Input
	printf_s("\nHours a day: ");
	scanf_s("%f", &hours_a_day);

	// Überschreiben der Variable mit User-Input
	printf_s("\nDays a year: ");
	scanf_s("%f", &days_a_year);

	// Überschreiben der Variable mit User-Input
	printf_s("\nPrice per kWh: ");
	scanf_s("%f", &price_per_kwh);

	// Ausgabe
	printf("Wattage: %f\n", wattage);
	printf("Hours a day: %f\n", hours_a_day);
	printf("Days a year: %f\n", days_a_year);
	printf("Price per kWh: %f\n", price_per_kwh);
	return 0.0;
}
