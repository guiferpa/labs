const { selection, insertion } = require('./sort');

describe('selection suite', () => {
  test('should be a function', () => {
    expect(typeof selection).toBe('function');
  });
});

describe('insertion suite', () => {
  test('should be a function', () => {
    expect(typeof insertion).toBe('function');
  });
});

