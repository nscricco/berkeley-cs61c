#include <stdio.h>

int main(void)
{
  int c, n;

  n = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n')
      n++;
  }

  printf("\nTotal Count: %d\n", n);
  return 0;
}
