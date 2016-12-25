#include <stdio.h>

/* print Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating point version */

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 30;

  printf("Fahrenheit\tCelsius\n");

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("\t%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
