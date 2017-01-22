#include <stdio.h>

float convertToFahrenheit(float celsius);

int main() {
  float fahrenheit, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("C\tF\n");

  while(celsius <= upper) {
    fahrenheit = convertToFahrenheit(celsius);
    printf("%3.0f\t%6.1f\n", celsius, fahrenheit);
    celsius = celsius + step;
  }
}

float convertToFahrenheit(float celsius) {
  return (celsius + 32.0) * (9.0/5.0);
}
