#define INC(x) (x + 1)

void insertion(const unsigned int len, int *nums) {
  unsigned int key = 1;

  for (; key < len; key++) {
    int num = nums[key];
    int index = DEC(key);

    while (index > -1 && num < nums[index]) {
      nums[INC(index)] = nums[index];
      --index;
    }

    nums[INC(index)] = num;
  }
}

