#include <stdio.h>

#define LENGTH 3

/*
  Multiple pointers, pointer to pointer with multiple indirection access data
*/

int main(int argc, char const *argv[]) {
  int data[LENGTH];
  int *pi;
  int **ppi;

  printf("Multiple indirection example\n");

  // Init our ineteger Array
  for (int i = 0; i < LENGTH; i++) {
    data[i] = i;
  }

  for (int i = 0; i < LENGTH; i++) {
    printf("%d\n", data[i]);
  }

  /*
    A: Simple pointer to a pointer to an integer
  */
  pi =   data;
  ppi = &pi;

  for (int i = 0; i < LENGTH; i++) {
    printf("\nLoop [%d] array address is %p\n", i, data);
    printf("Item pointed to by pi is %d\n", *pi);
    printf("Item pointed to by ppi is %p\n", *ppi);
    printf("Item pointed to by double indirection ppi is %d\n\n", **ppi);
    printf("The address of pi is %p and the value of ppi (what it points to) is %p\n\n", &pi, ppi);

    pi += 1;
  }

  return 0;
}
