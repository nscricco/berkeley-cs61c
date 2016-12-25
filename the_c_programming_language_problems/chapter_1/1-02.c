#include <stdio.h>

/* The compiler points out that something is wrong, shows up as 'c' in stdout*/
main()
{
  printf("hello\cworld\n");
}
