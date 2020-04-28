#include <stdio.h>

int main(void) {
  float a = 10 / 3;
  printf("Division from 10 / 3 = %.3f\n", a);

  float b = 10 / 3.0f;
  printf("Division from 10 / 3.0f = %.3f\n\n", b);

  int c = 1;
  printf("Short incremen (c++)t from %d", c);
  c++;
  printf(" to %d\n", c);

  printf("Short decrement (c--) from %d", c);
  c--;
  printf(" to %d\n\n", c);

  int d = 1;
  printf("Pos increment (d++): %d\n", d++); // Keep 1
  printf("Pre increment (++d): %d\n\n", ++d); // Go to 3, because of the past increment and the current increment

  int e = 10;
  e *= 10;
  printf("Short multiply (e *= 10): %d\n", e);

  e /= 10;
  printf("Short division (e /= 10): %d\n", e);
}
