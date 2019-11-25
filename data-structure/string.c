#include <stdio.h>

/*
  1. Every Array is a memory allocated sequentially.
  2. The Array is always terminated in a byte null.
  3. The variable of Array and the first index of Array, both are the same thing, 
  the pointer for the sequence of memory allocated. From that's follow through in the nexts indexes of Array.
*/

int main(int argc, char const *argv[]) {
  char str[] = "Hello World!";

  printf("Output: %s\n", str);
  printf("Address of string: %p\n", str);
  printf("Address of first index from string: %p\n", &str[0]);
  printf("Address of second index from string: %p\n", &str[1]);
  printf("Address of third index from string: %d\n", str[11]); // ! char in decimal ASCII table with number 33
  printf("Address of third index from string: %d\n", str[12]); // byte null

  return 0;
}
