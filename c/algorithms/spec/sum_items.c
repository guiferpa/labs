#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

#include "../sum.c"
#include "../helper.c"

int main(int argc, char **argv) {
  long *digits = malloc(sizeof (long*));
  unsigned int len = read_long_argv(argc, argv, digits);

  printf("%ld\n", sumItems(len, digits));
}
