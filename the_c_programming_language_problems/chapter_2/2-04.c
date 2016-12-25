/* squeeze: delete all c from s
 * void squeeze(char s[], int c)
 * {
 *   int i, j;
 *
 *   for (i = j = 0; s[i] != '\0'; i++)
 *     if (s[i] != c)
 *       s[j++] = s[i];
 *   s[j] = '\0';
 * }
 */

/* Write an alternate version of squeeze(s1, s2) that deletes each character
 * in s1 that matches any character in the string s2 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

void squeeze(char s[], char r[]);

int main(void)
{
  char hello[] = "Hello";
  squeeze(hello, "eo");
  // printf("%s\n", hello);
  assert(0 == strcmp(hello, "Hll"));

  char sentence[] = "remove the letters from this";
  squeeze(sentence, "eo");
  // printf("%s\n", sentence);
  assert(0 == strcmp(sentence, "rmv th lttrs frm this"));

  printf("tests passed!\n");

  return 0;
}

void squeeze(char s[], char r[])
{
  int i, j, k;
  int found = 0;

  for (i = k = 0; s[i] != '\0'; i++)
  {
    for (j = 0; r[j] != '\0'; j++)
    {
      if (s[i] == r[j])
        found = 1;
    }
    if (found == 0)
      s[k++] = s[i];
    found = 0;
  }
  s[k] = '\0';
}
