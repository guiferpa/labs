#include <stdio.h>
#include <stdlib.h>

/*
| X | X | X | X |
> 4 * 8 = 32 bytes
*/
typedef union a {
  int a;
  int b;
  int c;
} A;

/*
| X | X | X | X | X | X | X | X |
> 8 x 8 = 64 bytes
*/
typedef union b {
  int a;
  double b;
  int c;
} B;

/*
| X | X | X | X | X | X | X | X |
> 8 + 8 = 64 bytes
*/
typedef union c {
  int a;
  int b;
  long int c;
} C;

int main(void) {
  printf("Integer: %lu bit(s) / %lu byte(s)\n", sizeof (int), (sizeof (int)) * 8);
  printf("Long Long Integer: %lu bit(s) / %lu byte(s)\n", sizeof (long int), (sizeof (long int)) * 8);
  printf("Double: %lu bit(s) / %lu byte(s)\n", sizeof (double), (sizeof (double)) * 8);

  printf("\nSize of (union a): %lu bit(s) / %lu byte(s)\n", sizeof (A), (sizeof (A)) * 8);
  printf("Size of (union b): %lu bit(s) / %lu byte(s)\n", sizeof (B), (sizeof (B)) * 8);
  printf("Size of (union c): %lu bit(s) / %lu byte(s)\n", sizeof (C), (sizeof (C)) * 8);

  return 0;
}
