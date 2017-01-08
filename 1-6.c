#include <stdio.h>

main() {
  int c = getchar();
  int isNum = c != EOF;
  printf("%d", isNum);
}
