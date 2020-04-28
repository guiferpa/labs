#include <stdio.h>
#include <string.h>

int main(void) {
  char c[5]; // It's a pointer
  c[0] = 'H';
  c[1] = 'e';
  c[2] = 0x6c;
  c[3] = 0x6c;
  c[4] = 111;
  printf("c = Pointer %p = %p with value %s\n\n", &c, c, c);

  char *cp = "Hello world"; // A pointer to another pointer
  printf("cp = Pointer %p to %p with value %s\n\n", &cp, cp, cp);

  // Every array is a sequencie of memory address pointers
  printf("cp = Pointer %p -> %p -> %p::%c\n", &cp, cp, &cp[0], cp[0]);
  printf("cp = Pointer %p -> %p -> %p::%c\n", &cp, cp, &cp[1], cp[1]);
  printf("cp = Pointer %p -> %p -> %p::%c\n", &cp, cp, &cp[2], cp[2]);
  printf("cp = Pointer %p -> %p -> %p::%c\n", &cp, cp, &cp[3], cp[3]);
  printf("cp = Pointer %p -> %p -> %p::%c\n\n", &cp, cp, &cp[4], cp[4]);

  // Arithmetic of pointers
  int str_size = (int) strlen(cp);
  for (int i = str_size; i > 0; i--) {
    printf("cp = %p :: ", cp);
    printf("%c :: ", cp[0]);
    printf("%s\n", cp);
    cp += 1;
  }

  // Every array contains trash out of him bound
  printf("\nTrash from position 50 of array cp: %c\n", cp[50]);

  return 0;
}
