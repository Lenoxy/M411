#include <stdlib.h>
#include <stdio.h>

void main() {

	int Zahl = 10;
	char Zeichen = 'A';
	short Liste[8] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	double Werte[2] = { 0.00, 5.9 };


	int* pZahl = &Zahl;
	char* pZeichen = &Zeichen;
	short* pListe = NULL;
	double* pWert = Werte;

	printf("%i, %i\n", Zahl, pZahl);
	printf("%p, %c\n", &Zeichen, *pZeichen);
	printf("%d, %d\n", *Liste, Liste[1 + 2] + Liste[0]);
	printf("%p, %lf\n", &(++pWert), Werte[1]);

	Zahl = (*pZahl)++;
	Zeichen++;
	pListe = &Liste[1];
	pListe++;
	*pWert = --Werte[0] + 5;

	
	printf("%i, %i", Zahl, *pZahl);
	printf("%c, %p\n", Zeichen, pZeichen);
	printf("%d, %d\n", *pListe, &Liste[3 + 2]);
	printf("%lf,  %lf\n", Werte[0], Werte[1]);

	system("pause");


};