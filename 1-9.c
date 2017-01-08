#include <stdio.h>

int main() {
  int c, nextc;

  nextc = getchar();
  while ((c = nextc) != EOF) {
    nextc = getchar();
    if (c != ' ' || (c == ' ' && nextc != ' '))
      printf("%c", c);
  }
  printf("\n");
}
