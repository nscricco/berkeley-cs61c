/* Write a function reverse(s) that reverses the character string s. Use it to
 * write a program that reverses its input a line at a time. */

#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[]);
void reverse(char line[], int len);

int main(void) {
  int len;
  char line[MAXLINE];

  while ((len = get_line(line)) > 0) {
    reverse(line, len);
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

void reverse(char s[], int len)
{
  int i, k;
  char temp;

  for(i=0, k=len-1 ; i < (len/2); i++, k--)
  {
    temp = s[k];
    s[k] = s[i];
    s[i] = temp;
  }
}
