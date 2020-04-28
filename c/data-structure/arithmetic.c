#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
 char *data = "Hello World!";
 int str_size = (int) strlen(data);

 for (int i = str_size; i > 0; i--) {
   printf("%p :: ", data);
   printf("%c :: ", data[0]);
   printf("%s\n", data);
   data += 1;
 }

 return 0;
}

