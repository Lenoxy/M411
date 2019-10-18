// B2A6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "stdio.h"
#include"stdlib.h"

#define MAX_STRLEN 255

void main()
{
	char Text[MAX_STRLEN + 1];

	printf("Text Eingeben: ");
	gets_s(Text);

	char *pText = Text;
	while (*pText != '\0') pText++;
	
	int count = pText - Text;

	

	printf("Text: \"%s\"\n", Text);
	printf("Count: %d\n", count);
}
