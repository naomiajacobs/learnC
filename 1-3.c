#include <stdio.h>

main() {
  int fahr;

  for (fahr = 300; fahr > 0; fahr = fahr - 20) {
    printf("%3d\t%6.1f\n", fahr, (fahr - 32.0) * (5.0/9.0));
  }
}
