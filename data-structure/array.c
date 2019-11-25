#include <stdio.h>

int main(int argc, char const *argv[]) {
  char title[] = "Pointers in Array";
  char *description = "A short sample about pointer in a Array context";

  /*
    We can set:
    > description = title; or description = &title;
    Both works because one array is a reference to some space in memory
  */
  description = title;

  printf("Title: %p -> %p = %s\n", &title, title, title);
  printf("Description: %p -> %p = %s\n", &description, description, description);

  return 0;
}
