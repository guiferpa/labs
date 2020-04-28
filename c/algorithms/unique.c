#include <stdio.h>
#include <stdlib.h>

int unique(int len, long *nums) {
  int nlen = 0;
  long *nnums = malloc(sizeof (long*));

  for (int i = 0; i < len; i++) {
    if (nums[labs(nums[i])] > 0) {
      nums[labs(nums[i])] = - nums[labs(nums[i])];
      nnums[nlen] = labs(nums[i]);
      ++nlen;
    }
  }

  for (int i = 0; i < nlen; i++)
    nums[i] = nnums[i];

  return nlen;
}

// int main(void) {
  // long nums[] = { 1, 2, 6, 2 };
  // int len = 4;
  // len = unique(len, nums);
//
  // for (int i = 0; i < len; i++)
    // printf("%ld ", nums[i]);
// }
