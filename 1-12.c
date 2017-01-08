#include <stdio.h>

int main() {
	int c, state;

	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c =='\n')
			printf("\n");
		else
			printf("%c", c);
	}
}
