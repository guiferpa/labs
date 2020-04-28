// #include "stdio.h" it's a macro to join other file from current directory
#include <stdio.h> // it's a macro to join other file from system
#define QUAD(x) (x*x)

int main(void) {
  printf("%d", QUAD(8));

  return 0;
}
