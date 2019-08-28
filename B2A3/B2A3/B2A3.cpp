#include <stdlib.h>
#include <stdio.h>


int main()
{
	double celciusToFarenheit(double);

	printf("Geben Sie Ihre Temperatur in Celsius ein:\n");
	double celcius = 0;
	scanf_s("%lf", &celcius);
	printf("%g Grad Celcius sind %g Grad Farenheit.\n", celcius, celciusToFarenheit(celcius));
	system("pause");
}

double celciusToFarenheit(double celcius) {
	double farenheit = ((celcius * 9) / 5) + 32;
	return farenheit;
}
