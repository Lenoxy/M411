#include <stdlib.h>
#include <stdio.h>

void main() {
	int var = 10;
	int* pVar = &var;

	printf("var: %i\n", var);
	printf("pVar: %i\n", pVar);

	printf("*pVar: %i\n", *pVar);

	printf("&var: %i\n", &var);
	printf("&pVar: %i\n", &pVar);
}