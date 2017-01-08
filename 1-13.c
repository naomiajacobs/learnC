#include <stdio.h>

int main() {
	int c, count, state;
	int wordLengths[10];

	for (int k = 0; k < 10; k++) {
		wordLengths[k] = 0;
	}

	c = count = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (count > 0) {
				if (count > 9) { ++wordLengths[0]; }
				else { ++wordLengths[count]; }
			}
			count = 0;
		}
		else {
			++count;
		}
	}

	for (int i = 1; i < 10; i++) {
		printf("%d: ", i);

		for (int j = 0; j < wordLengths[i]; j++) {
			printf("-");
		}
		printf("\n");
	}
	printf("+: ");
	for (int h = 0; h < wordLengths[0]; h++) {
		printf("-");
	}
	printf("\n");
}
