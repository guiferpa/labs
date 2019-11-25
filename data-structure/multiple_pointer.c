//
// Created by Guilherme Paixão on 22/11/19.
//

#include <stdio.h>

int main(int argc, char **argv) {
  int i;

  for (int i = 0; i < argc; i++) {
    printf("argument %d is %s\n", i, argv[i]);
  }

  printf("\n\n");

  for (int i = 0; i < argc; i++) {
    printf("argument %d is %s\n", i, *argv);
    argv += 1;
  }

  int number = 10;
  int* pnumber = &number;
  int** ppnumber = &pnumber;

  printf("\n%p -> %d\n", &number, number);
  printf("%p -> %p -> %d\n", &pnumber, pnumber, *pnumber);
  printf("%p -> %p -> %p -> %d", &ppnumber, ppnumber, *ppnumber, **ppnumber);

  **ppnumber += 10;

  printf("\n%p -> %d\n", &number, number);
  printf("%p -> %p -> %d\n", &pnumber, pnumber, *pnumber);
  printf("%p -> %p -> %p -> %d", &ppnumber, ppnumber, *ppnumber, **ppnumber);

  return 0;
}