#include <stdio.h>

int fibonacci(int n) {
  if (n < 3)
    return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
  printf("%u\n", fibonacci(10));
}
