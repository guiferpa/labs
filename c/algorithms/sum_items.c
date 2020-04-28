#define DEC(x) (x - 1)

long sumItems(int len, long *n) {
  if (len < 1)
    return 0;

  return n[DEC(len)] + sumItems(DEC(len), n);
}
