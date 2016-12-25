/* Rewrite the temperature conversion program of Section 1.2 to use a function
 * for conversion */

#include <stdio.h>

float celsius(float fahr);

int main(void)
{
  float fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 30;

  printf("Fahrenheit\tCelsius\n");

  fahr = lower;
  while (fahr <= upper) {
    printf("\t%3.0f\t%6.1f\n", fahr, celsius(fahr));
    fahr = fahr + step;
  }

  return 0;
}

float celsius(float fahr) {
  return (5.0/9.0) * (fahr-32.0);
}
