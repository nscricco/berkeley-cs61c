/* Write the function any(s1, s2), which returns the first location in the
 * string s1 where any character from the string s2 occurs, or -1 if s1 contains
 * no characters from s2. (The standard library function strpbrk does the same
 * job but returns a pointer to the location.) */

#include <stdio.h>
#include <assert.h>

int find_chars(char s[], char f[]);

int main(void)
{
  assert(find_chars("foobar", "e") == -1);
  assert(find_chars("foobar", "a") == 4);
  assert(find_chars("foobar", "ao") == 1);

  printf("tests passed!\n");

  return 0;
}

int find_chars(char s[], char f[])
{
  for(int i = 0; s[i] != '\0'; i++)
    for(int j = 0; f[j] != '\0'; j++)
      if(s[i] == f[j])
        return i;

  return -1;
}
