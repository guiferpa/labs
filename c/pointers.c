#include <stdio.h>
#include <stdlib.h>

void hello(int *s) {
  printf("Hello, ");
  while(*s) // When get the byte 0x00 it will stop because 0 is false
    printf("%c", *s++);
}

int main(void) {
  int name[] = { 0x46, 0x6C, 0x61, 0x6D, 0x65, 0x6E, 0x67, 111, 0x0A, 0x00 };
  hello(name);

  int i;
  int *p = &i;
  *p = 9;
  printf("&p=%p -> p=%p -> &i=%p : %d\n", &p, p, &i, i);

  int *j; // Pointer with target to NULL
  j = malloc(sizeof (int));
  *j = 10;
  printf("%p=%d\n", j, *j);

  char animal[] = "Snake";
  printf("%c\n", animal[1]); // n
  printf("%c\n", *(animal + 1)); // n

  printf("%c\n", 1[animal]); // n
  printf("%c\n", *(1 + animal)); // n
}
