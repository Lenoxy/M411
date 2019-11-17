#include <stdlib.h>
#include <stdio.h>

int indexOf(int*, int, int);

void main() {
	int Werte[] = { 10, 12, 45, 56, 98, 23 };
	printf("Index = %i", indexOf(Werte, 6, 45));

}

int indexOf(int* pointer, int length, int searchFor) {
	printf("%p", &pointer);
	for (pointer; pointer != pointer + length; pointer++) {
		if (*pointer = searchFor) {

		}
	}
	
	return NULL;
}