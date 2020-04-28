#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "../sort.c"
#include "../helper.c"

int main(int argc, char **argv) {
  long *digits = malloc(sizeof (long*));
  unsigned int len = read_long_argv(argc, argv, digits);

  unsigned int init = 0;
  merge(init, len, digits);

  for (int i = 0; i < len; i++)
    printf("%lu ", digits[i]);

  putchar('\n');
}
