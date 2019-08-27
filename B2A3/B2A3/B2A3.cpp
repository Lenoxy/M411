#include <stdlib.h>
#include <stdio.h>


int main()
{
	printf("Geben Sie Ihre Temperatur in Celsius ein:\n");
	double celcius = 0;
	scanf_s("%lf", &celcius);
	double farenheit = ((celcius * 9) / 5) + 32;
	printf("%g Grad Celcius sind %g Grad Farenheit.\n", celcius, farenheit);
	system("pause");
}
