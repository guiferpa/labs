#include <stdio.h>

int sumMultiplesOf(int multc, int multv[], int limit) {
  int result = 0;

  for (int i = 1; i < limit; i++) {
    for (int j = 0; j < multc; j++) {
      if ((i % multv[j]) == 0) {
        result += i;
        break;
      }
    }
  }

  return result;
}
