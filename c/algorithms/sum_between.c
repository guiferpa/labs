#define DEC(x) (x - 1)
#define INC(x) (x + 1)

long sumBetween(long from, long to) {
  if (to == from)
    return to;

  return to + sumBetween(from, to < from ? INC(to) : DEC(to));
}


