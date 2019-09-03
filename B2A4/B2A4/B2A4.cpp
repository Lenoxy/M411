#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

void main() {
	double zahl;
	printf("Geben Sie Ihre Zahl ein:\n");
	scanf_s("%lf", &zahl);
	double drittel = zahl / 3;

	printf("Inhalt / Adresse DRITTEL:\n");
	printf("%lg / %p\n", drittel, &drittel);

	printf("Inhalt / Adresse ZAHL:\n");
	printf("%lg / %p\n\n\n", zahl, &zahl);

	system("pause");
}