/* Write a program to print all inpuyt lines that are longer than 80
 * characters */

#include <stdio.h>
#define MAXLINE 1000
#define LEN 80

int get_line(char line[]);

int main(void) {
  int len;
  char line[MAXLINE];

  while ((len = get_line(line)) > 0) {
    if (len > LEN)
      printf("%s", line);
  }
  return 0;
}

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
