#include <stdio.h>

#define INC(x) (x + 1)
#define DEC(x) (x - 1)

void interpolate(const unsigned int offset, const unsigned int mid, const unsigned int len, long *nums) {
 const unsigned int llen = (mid - offset);
 const unsigned int rlen = (len - mid);

 long itemsl[llen];
 long itemsr[rlen];

 unsigned int i = 0;
 for (; (i + offset) < mid; i++)
   itemsl[i] = nums[i + offset];

 unsigned int j = 0;
 for (; (j + mid) < len; j++)
   itemsr[j] = nums[j + mid];

 i = 0;
 j = 0;
 unsigned int k = offset;
 for (; k < len; k++) {
   if (i == llen) {
     nums[k] = itemsr[j];
     j++;
     continue;
   }

   if (j == rlen) {
     nums[k] = itemsl[i];
     i++;
     continue;
   }

   if (itemsl[i] < itemsr[j]) {
     nums[k] = itemsl[i];
     i++;
     continue;
   }

   nums[k] = itemsr[j];
   j++;
 }
}

void merge(int offset, int len, long *nums) {
  const unsigned int init = (offset + 1);
  if (init < len) {
    unsigned int mid = (offset + len) / 2;

    merge(offset, mid, nums);
    merge(mid, len, nums);
    interpolate(offset, mid, len, nums);
  }
}

