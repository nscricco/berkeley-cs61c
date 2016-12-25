/* Write a loop equivalent to the for loop above without using && or || */

#include <stdio.h>

int get_line(char line[], int lim);

int main(void) {
  int len;
  int lim = 1000;
  char line[lim];

  while ((len = get_line(line, lim)) > 0) {
    printf("%d: %s", len, line);
  }
  return 0;
}

int get_line(char s[], int lim)
{
  int c, i;

  for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}
