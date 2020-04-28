int read_long_argv(int argc, char **argv, long *src) {
  char *failptr;
  long conv;
  unsigned int len = 0;
  unsigned int index = 1;

  for (; index < argc; index++) {
    conv = strtol(argv[index], &failptr, 10);
    if (!*failptr) {
      src += (len);
      *src = conv;
      src -= (len);
      len++;
    }
  }

  return len;
}

void checkInteger(char desc[], int want, int got) {
  char tmpl[] = "[TEST] %s: \n=== want: %d, got: %d\n";
  if (want != got) {
    fprintf(stderr, "\033[0;31m");
    fprintf(stderr, tmpl, desc, want, got);
    fprintf(stderr, "\033[0m");
    exit(1);
  }

  fprintf(stdout, "\033[0;32m");
  fprintf(stdout, tmpl, desc, want, got);
  fprintf(stdout, "\033[0m");
}
