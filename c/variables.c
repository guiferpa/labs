#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
  char c;
  printf("Size of variable c (char): %lu byte(s) - %lu bit(s)\n\n", sizeof c, sizeof c * 8); // %lu - long unsigned

  bool b;
  b = false;
  printf("Size of variable b (bool): %lu byte(s) - %lu bit(s)\n", sizeof b, sizeof b * 8);
  printf("Value of variable b (bool): %d\n\n", b);

  int i;
  i = INT_MAX;
  printf("Size of variable i (int): %lu byte(s) - %lu bit(s)\n", sizeof i, sizeof i * 8);
  printf("Value of variable i (int): %d\n\n", i);

  i++; // Signed integer
  printf("Size of variable i (int): %lu byte(s) - %lu bit(s)\n", sizeof i, sizeof i * 8);
  printf("Value of variable i (int): %d\n\n", i);

  uint32_t ui; // It's coming from <stdint.h> header to force the number of bits despite current arch.
  ui = UINT_MAX;
  printf("Size of variable ui (uint32_t): %lu byte(s) - %lu bit(s)\n", sizeof ui, sizeof ui * 8);
  printf("Value of variable ui (uint32_t): %u\n\n", ui); // %u for unsigned int

  short int si; // or just "short si;"
  si = 10;
  printf("Size of variable ui (short int): %lu byte(s) - %lu bit(s)\n", sizeof si, sizeof si * 8);
  printf("Value of variable ui (short int): %d\n\n", si);

  unsigned long int li; // or just "unsigned long li;"
  li = ULONG_MAX;
  printf("Size of variable li (unsigned long int): %lu byte(s) - %lu bit(s)\n", sizeof li, sizeof li * 8);
  printf("Value of variable li (unsigned long int): %lu\n\n", li);

  size_t st;
  printf("Size of variable st (size_t): %lu byte(s) - %lu bit(s)\n\n", sizeof st, sizeof st * 8);

  register int ri; // "register int" saves itself in a CPU register to faster calcule for example
  ri = 10;
  printf("Size of variable st (register int): %lu byte(s) - %lu bit(s)\n\n", sizeof ri, sizeof ri * 8);

  float f = 1;
  printf("Size of variable f (float): %lu byte(s) - %lu bit(s)\n", sizeof f, sizeof f * 8);
  printf("Value of variable f (float): %.2f\n\n", f);

  double db = 1;
  printf("Size of variable db (double): %lu byte(s) - %lu bit(s)\n", sizeof db, sizeof db * 8);
  printf("Value of variable db (double): %.2f\n\n", db);

  long double ldb = 1;
  printf("Size of variable db (long double): %lu byte(s) - %lu bit(s)\n", sizeof ldb, sizeof ldb * 8);
  printf("Value of variable db (long double): %.2Lf\n\n", ldb);

  return 0;
}
