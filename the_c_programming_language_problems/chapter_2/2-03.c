/* Write the function htoi(s), which converts a string of hexadecimal digits
 * (including an optional 0X or 0X) into its equivalent integer value. The
 * allowable digits are 0 through 9, a through f and A through F. */

#include <stdio.h>
#include <assert.h>

int get_int(char hex);
int htoi(char s[]);

int main(void)
{
  assert(get_int('0') == 0);
  assert(get_int('a') == 10);
  assert(get_int('A') == 10);
  assert(get_int('g') == -1);

  assert(htoi('0') == 0);

  printf("tests passed!\n");

  return 0;
}

int get_int(char h)
{
  if (h >= '0' && h <= '9')
    return h - '0';
  else if (h >= 'a' && h <= 'f')
    return h - 'a' + 10;
  else if (h >= 'A' && h <= 'F')
    return h - 'A' + 10;

  return -1;
}

int htoi(char s[])
{
  int t = 0;

  for (int i = length(s)
}
