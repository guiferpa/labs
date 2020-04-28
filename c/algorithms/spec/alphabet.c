#include "../sort.c"

int main(int argc, char *argv[]) {
  if (argc < 2)
    return 0;

  unsigned int len = DEC(argc);
  char **words = ++argv;

  alphabet(len, words);

  unsigned int index = 0;

  for(; index < len; index++)
    printf("%s ", words[index]);

  putchar('\n');
}
