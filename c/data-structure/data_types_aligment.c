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
  printf("%lu -> Integer\n", sizeof(int));
  printf("%lu -> Long Long Integer\n", sizeof(long long int));
  printf("%lu -> Double\n", sizeof(double));

  printf("\n%lu -> size_of :: A\n", sizeof(A));
  printf("%lu -> size_of :: B\n", sizeof(B));
  printf("%lu -> size_of :: C\n", sizeof(C));

  return 0;
}
