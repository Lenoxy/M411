#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void main() {
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		printf("%i\n", rand());
	}

}