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

	int highestCount = 0;
  for (int i = 0; i < 10; i++) {
    if (wordLengths[i] > highestCount) {
      highestCount = wordLengths[i];
    }
  }

  int linesLeft;
  for (linesLeft = highestCount; linesLeft > 0; linesLeft--) {
    for (int j = 1; j < 10; j++) {
      if (linesLeft <= wordLengths[j]) {
        printf("| ");
      } else {
        printf("  ");
      }
    }
    if (linesLeft <= wordLengths[0]) {
      printf("| ");
    } else {
      printf("  ");
    }
    printf("\n");
  }
  printf("1 2 3 4 5 6 7 8 9 +\n");
}
