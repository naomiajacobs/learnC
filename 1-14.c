#include <stdio.h>

int main() {
	int c;
  char character;
	int characters[256];

	for (int k = 0; k < 256; k++) {
		characters[k] = 0;
	}

	c = 0;
	while ((c = getchar()) != EOF) {
		++characters[c];
	}

	for (int i = 1; i < 256; i++) {
    character = i;
		printf("%c: ", character);

		for (int j = 0; j < characters[i]; j++) {
			printf("-");
		}
		printf("\n");
	}
	printf("\n");
}
