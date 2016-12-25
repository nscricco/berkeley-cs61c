/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]
 * int binsearch(int x, int v[], int n)
 * {
 *   int low, high, mid;
 *
 *   low = 0;
 *   high = n - 1;
 *   while (low <= high) {
 *     mid = (low+high) / 2;
 *     if (x < v[mid])
 *       high = mid - 1;
 *     else if (x > v[mid])
 *       low = mid + 1;
 *     else
 *       return mid;
 *   }
 *
 *   return -1;
 * } */

/* Our binary search makes two tests inside the loop, when one would suffice
 * (at the price of more tests outside). Write a version with only one test
 * inside the loop and measure the difference in run time. */

#include <stdio.h>
#include <assert.h>

int binsearch(int x, int v[], int n);

int main(void)
{
  int test1[1] = {1};
  assert(binsearch(0, test1, 1) == -1);

  int test2[1] = {0};
  assert(binsearch(0, test2, 1) == 0);

  int nums[6] = {0, 1, 2, 3, 4, 5};
  // printf("%i\n", binsearch(4, nums, 6));
  assert(binsearch(4, nums, 6) == 4);

  printf("tests passed!\n");
  return 0;
}

int binsearch(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;

  while (low <= high && x != v[mid = (low+high)/2])
    x < v[mid] ? (high = mid - 1) : (low = mid + 1);

  if (x == v[mid])
    return mid;

  return -1;
}
