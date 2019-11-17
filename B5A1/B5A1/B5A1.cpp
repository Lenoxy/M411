#include <stdlib.h>
#include <stdio.h>

void main() {
	int strlen(const char* pStr) {
		int i = 0;
		for (pStr; pStr != "\0"; pStr++) {
			i++;
		}
		return i;
	}

	int Werte[50] = {12, 32, 43, 543, 53, 65, 76, 87}
} 