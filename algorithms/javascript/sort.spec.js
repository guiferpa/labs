const { selection, insertion, interpolate, merge } = require('./sort');

describe('selection suite', () => {
  test('should be a function', () => {
    expect(typeof selection).toBe('function');
  });

  test('should be the first parameter as Array structure type', () => {
    expect(() => selection(1)).toThrow();
  });

  test('should be the second parameter as Number.integer structure type', () => {
    expect(() => selection([], [])).toThrow();
  });

  test('should be the return as Array structure type', () => {
    const parameter = [];
    const result = selection(parameter, parameter.length);
    expect(Array.isArray(result)).toBe(true);
  });

  test('should be a result not equals [5, 1, 3, 2, 4, 0] with parameters [0, 1, 2] and [3, 4, 5]', () => {
    const parameter = [5, 1, 3, 2, 4, 0];
    expect(selection(parameter, parameter.length)).not.toStrictEqual([3, 5, 1, 2, 4, 0]);
  });

  test('should be a result equals [1, 4, 7, 10, 98] with parameter [4, 98, 1, 7, 10]', () => {
    const parameter = [4, 98, 1, 7, 10];
    expect(selection(parameter, parameter.length)).toStrictEqual([1, 4, 7, 10, 98]);
  });
});

describe('insertion suite', () => {
  test('should be a function', () => {
    expect(typeof insertion).toBe('function');
  });

  test('should be the first parameter as Array structure type', () => {
    expect(() => insertion(1)).toThrow();
  });

  test('should be the second parameter as Number.integer structure type', () => {
    expect(() => insertion([], [])).toThrow();
  });

  test('should be the return as Array structure type', () => {
    const parameter = [];
    const result = insertion(parameter, parameter.length);
    expect(Array.isArray(result)).toBe(true);
  });

  test('should be a result not equals [5, 1, 3, 2, 4, 0] with parameters [0, 1, 2] and [3, 4, 5]', () => {
    const parameter = [5, 1, 3, 2, 4, 0];
    expect(insertion(parameter, parameter.length)).not.toStrictEqual([3, 5, 1, 2, 4, 0]);
  });

  test('should be a result equals [1, 4, 7, 10, 98] with parameter [4, 98, 1, 7, 10]', () => {
    const parameter = [4, 98, 1, 7, 10];
    expect(insertion(parameter, parameter.length)).toStrictEqual([1, 4, 7, 10, 98]);
  });
});

describe('interpolate suite', () => {
  test('should be a function', () => {
    expect(typeof interpolate).toBe('function');
  });

  test('should be the first parameter as Array structure type', () => {
    expect(() => interpolate(1, 0, 0)).toThrow();
  });

  test('should be the second parameter as Number.integer structure type', () => {
    expect(() => interpolate([], [], 0, 0)).toThrow();
  });

  test('should be the third parameter as Number.integer structure type', () => {
    expect(() => interpolate([], 0, [], 0)).toThrow();
  });

  test('should be the fourth parameter as Number.integer structure type', () => {
    expect(() => interpolate([], 0, 0, true)).toThrow();
  });

  test('should be the return as Array structure type', () => {
    const parameter = [0, 1, 2];
    const result = interpolate(parameter, 0, Math.floor(parameter.length / 2), parameter.length);
    expect(Array.isArray(result)).toBe(true);
  });

  test('should be a result not equals [5, 1, 3, 2, 4, 0] with parameter [0, 1, 2, 3, 4, 5]', () => {
    const parameter = [0, 1, 2, 3, 4, 5];
    const result = interpolate(parameter, 0, Math.floor(parameter.length / 2), parameter.length);
    expect(result).not.toStrictEqual([5, 1, 3, 2, 4, 0]);
  });

  test('should be a result equals [0, 1, 2, 3, 4, 5] with parameter [3, 4, 5, 0, 1, 2]', () => {
    const parameter = [3, 4, 5, 0, 1, 2];
    const result = interpolate(parameter, 0, Math.floor(parameter.length / 2), parameter.length);
    expect(result).toStrictEqual([0, 1, 2, 3, 4, 5]);
  });

  test('should be a result equals [0, 1, 2, 3, 4, 5] with parameter [3, 4, 5, -1, 1, 2, 10]', () => {
    const parameter = [3, 4, 5, -1, 1, 2, 10];
    const result = interpolate(parameter, 0, Math.floor(parameter.length / 2), parameter.length);
    expect(result).toStrictEqual([-1, 1, 2, 3, 4, 5, 10]);
  });
});

describe('merge suite', () => {
  test('should be a function', () => {
    expect(typeof merge).toBe('function');
  });

  // test('should be a function', () => {
  //   const items = [10, 1, 2, 7, 9, 8, 3, 0];
  //   // const items = [4, 6, 3];
  //   const itemsnew = merge(items, 0, items.length);
  //   console.log(itemsnew)
  // });
});
