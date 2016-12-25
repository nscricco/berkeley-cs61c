/* Write a program to copy its input to its output, replacing each string of one
 * or more blanks by a single blank. */

#include <stdio.h>

int main(void)
{
  int c;
  int in_whitespace = 0;

  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
        if (in_whitespace == 0)
          in_whitespace = 1;
    }
    else {
      if (in_whitespace == 1) {
        in_whitespace = 0;
        printf(" ");
      }
      printf("%c", c);
    }
  }

  return 0;
}
