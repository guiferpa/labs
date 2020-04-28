#include <stdio.h>
#include <stdlib.h>

/*
| A | A | A | A | B | B | B | B | C | C | C | C |
> 3 x 4 = 12
*/
typedef struct a {
  int a;
  int b;
  int c;
} A;

/*
| A | A | A | A | - | - | - | - |
| B | B | B | B | B | B | B | B |
| C | C | C | C | - | - | - | - |
> 3 x 8 = 24
*/
typedef struct b {
  int a;
  double b;
  int c;
} B;

/*
| A | A | A | A | B | B | B | B |
| C | C | C | C | C | C | C | C |
> (2 x 4) + 8 = 16
*/
typedef struct c {
  int a;
  int b;
  long int c;
} C;

int main(void) {
  printf("Integer: %lu bit(s) / %lu byte(s)\n", sizeof (int), (sizeof (int)) * 8);
  printf("Long Long Integer: %lu bit(s) / %lu byte(s)\n", sizeof (long int), (sizeof (long int)) * 8);
  printf("Double: %lu bit(s) / %lu byte(s)\n", sizeof (double), (sizeof (double)) * 8);

  printf("\nSize of (struct a): %lu bit(s) / %lu byte(s)\n", sizeof (A), (sizeof (A)) * 8);
  printf("Size of (struct b): %lu bit(s) / %lu byte(s)\n", sizeof (B), (sizeof (B)) * 8);
  printf("Size of (struct c): %lu bit(s) / %lu byte(s)\n", sizeof (C), (sizeof (C)) * 8);

  return 0;
}
