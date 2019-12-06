#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int StringLength(const char* pStr) {
	int count = 0;
	while (*pStr != '\0') {

		printf("%c", *pStr);

		count++;
		pStr++;
	}
	return count;
}

void main() {

	const char Text[255] = "Text";
	const char* pText = Text;
	
	printf("L\x84nge = %i", StringLength(pText));
}

