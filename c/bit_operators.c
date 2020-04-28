#include <stdio.h>

int main(void) {
  printf("2 & 1 = %d\n", 2 & 1); // 10 & 01 = 00 -> 0
  printf("2 | 1 = %d\n", 2 | 1); // 10 | 01 = 11 -> 3
  printf("2 ^ 1 = %d\n", 2 ^ 1); // 10 ^ 01 = 11 -> 3

  char a = 4;
  printf("~4 = %d\n\n", ~a); // 00000100 -> 11111011 = -5

  // Multiplication by the same base
  printf("10 * 10 = %d\n", 10 * 10); // 100
  printf("10 * 2 = %d\n\n", 10 << 1); // 20

  printf("10 / 10 = %d\n", 10 / 10); // 1
  printf("10 / 2 = %d\n", 10 >> 1); // 5
}
