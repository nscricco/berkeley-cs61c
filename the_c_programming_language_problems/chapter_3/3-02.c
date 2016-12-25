/* Write a function escape(s,t) that converts characters like newline and tab
 * into visible escape sequences like \n and \t as it copies the string t to s.
 * Use a switch. Write a function for the other direction as well, converting
 * escape sequences into the real characters. */

#include <stdio.h>
#include <string.h>
#include <assert.h>

void escape(char s[], char t[]);

int main(void)
{
  char start[] = "foo\tbar\n";
  char end[100];
  escape(start, end);
  // printf("%s\n", end);
  assert(0 == strcmp(end, "foo\\tbar\\n"));

  printf("tests passed!\n");
  return 0;
}

void escape(char s[], char t[])
{
  int j = 0;

  for (int i = 0; s[i] != '\0'; i++)
  {
    switch (s[i]) {
      case '\n':
        t[j++] = '\\';
        t[j++] = 'n';
        break;
      case '\t':
        t[j++] = '\\';
        t[j++] = 't';
        break;
      default:
        t[j++] = s[i];
    }
  }

  t[j] = '\0';
}
