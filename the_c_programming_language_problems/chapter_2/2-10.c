/* Rewrite the function lower, which converts upper case letters to lower case,
 * with a conditional expression instead of if-else. */

#include <stdio.h>
#include <string.h>
#include <assert.h>

void lower(char s[]);

int main(void)
{
  char test1[] = "foo";
  lower(test1);
  assert(0 == strcmp(test1, "foo"));

  char test2[] = "Foo";
  lower(test2);
  assert(0 == strcmp(test2, "foo"));

  char test3[] = "THis iS a TESt sentENce.";
  lower(test3);
  assert(0 == strcmp(test3, "this is a test sentence."));

  printf("tests passed!\n");

  return 0;
}

void lower(char s[])
{
  for(int i = 0; s[i] != '\0'; i++)
    s[i] = s[i] >= 'A' && s[i] <= 'Z' ? s[i] - 'A' + 'a' : s[i];
}
