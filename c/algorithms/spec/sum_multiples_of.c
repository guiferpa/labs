// https://projecteuler.net/problem=1
#include <stdlib.h>

#include "../helper.c"
#include "../sum_multiples_of.c"

int main(void) {
  int want, got;

  int multiplesA[] = {3, 5};
  int multiplesAc = (sizeof (multiplesA) / sizeof (multiplesA[0]));
  want = 23;
  got = sumMultiplesOf(multiplesAc, multiplesA, 10);
  checkInteger("sum of multiples [3, 5] below that 10", want, got);

  int multiplesB[] = {3, 5};
  int multiplesBc = (sizeof (multiplesB) / sizeof (multiplesB[0]));
  want = 233168;
  got = sumMultiplesOf(multiplesAc, multiplesA, 1000);
  checkInteger("sum of multiples [3, 5] below that 1000", want, got);
}
