const linear = (items, initial, length, value) => {
    for (let index = initial; index < length; index++) {
      if (items[index] === value) return index;
    }
    return -1;
}

const binary = (items, initial, length, value) => {
  if (initial > length) return -1;
  
  const index = Math.floor((initial + length) /2);
  const item = items[index];

  if (item === value) return index;

  if (item > value) return binary(items, initial, index -1, value);

  return binary(items, index +1, length, value);
}

module.exports = {
  linear,
  binary
};
