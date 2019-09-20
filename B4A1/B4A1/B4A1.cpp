#include <stdio.h>
#include <stdlib.h>

void main()
{
	int array[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int Anzahl = sizeof(array) / sizeof(array[0]);

	for (int* pArray = array; (pArray - array) < Anzahl; pArray++) {
		printf("%i\n", *pArray);
	}
}