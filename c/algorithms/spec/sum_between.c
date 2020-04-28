#include <stdio.h>

#include "../sum.c"

int main(void) {
  long result = sumBetween(1, 3);
  printf("%ld\n",  result);
}
