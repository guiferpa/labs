#include <stdio.h>

int main(void) {
  char message[] = "I am inside a block";
  {
    char message[] = "I am inside another block"; // This variable only exists inside this block
    printf("Micro block: %s\n", message);
  }
  printf("Macro block: %s\n", message);

  if (1) { // it's true
    printf("Hello I am here, printed\n");
  }

  if (0) { // it's false
    printf("Oooh god I am never will printed\n");
  }

  int a = 0;
  if (a = 1) { // Attention: this condition will happen after attribution then it's true
    printf("Hello I am here, printed because of attribution\n");
  }

  (3 > 5) ? puts("It's true") : puts("It's false");
}
