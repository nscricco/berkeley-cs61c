/* Revise the main routine of the longest-line program so it will correctly
 * print the length of arbitrarily long input lines, and as much as possible of
 * the text. */

#include <stdio.h>
#define MAXLINE 1000
#define LEN 20

int get_line(char line[]);

/* print input line */
int main(void) {
  int len;
  char line[MAXLINE];     /* current input line */

  while ((len = get_line(line)) > 0) {
    if (len > LEN)
      printf("%d: %s", len, line);
  }
  return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[])
{
  int c, i;

  for (i=0; i<MAXLINE-1 && (c=getchar()) != EOF && c!='\n'; i++)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}
