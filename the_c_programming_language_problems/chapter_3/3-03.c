/* Write a function expand(s1, s2) that expands shorthand notations like a-z in
 * the string s1 into the quivalent complete list abc...xyz in s2. Allow for
 * letters of either case and digits, and be prepared to handle cases like a-b-c
 * and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally.
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

void expand(char s1[], char s2[]);

int main(void)
{
  char start1[] = "a-c";
  char end[100];
  expand(start1, end);
  // printf("%s\n", end);
  assert(0 == strcmp(end, "abc"));

  char start2[] = "a-e0-4";
  expand(start2, end);
  // printf("%s\n", end);
  assert(0 == strcmp(end, "abcde01234"));

  printf("tests passed!\n");
  return 0;
}

void expand(char s1[], char s2[])
{
  char last;
  int i, j;

  for(i = j = 0; s1[i] != '\0'; i++)
  {
    if (s1[i] == '-')
    {
      char c;
      for(c = last; c != s1[i+1]; c++)
        s2[j++] = c;
      s2[j++] = c;
    }
    last = s1[i];
  }
  s2[j] = '\0';
}
