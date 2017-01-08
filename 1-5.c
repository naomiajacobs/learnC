#include <stdio.h>

main() {
  int c;
  c = getChar();
  while (c != EOF) {
    putchar(c);
    c = getChar();
  }
}
