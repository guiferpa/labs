const smallest = require('./smallest');

test('should be a function', () => {
  expect(typeof smallest).toBe('function');
});

test('should return exception if the first parameter will be not a Array', () => {
  expect(() => smallest(1)).toThrow();
});

test('should return the index 2 with parameter equals [ 1, 0, -3, 3, 10 ]', () => {
  const param = [1, 0, -3, 3, 10];
  const currentIndex = 0;
  expect(smallest(param, currentIndex, param.length)).toBe(2);
});

test('should return the index 0 with parameter equals [ 1, 2, 3, 9, 7 ]', () => {
  const param = [1, 2, 3, 9, 7];
  const currentIndex = 0;
  expect(smallest(param, currentIndex, param.length)).toBe(0);
});

test('should return the index 2 with parameter equals [ 1, 2, 3, 9, 7 ] and current index as 2', () => {
  const param = [1, 2, 3, 9, 7];
  const currentIndex = 2;
  expect(smallest(param, currentIndex, param.length)).toBe(2);
});

test('should return the index 2 with parameter equals [ 6, 3, 1, 9, 0 ] and current index as 0 but the limit as 3', () => {
  const param = [6, 3, 1, 9, 0];
  const currentIndex = 0;
  const limit = 3;
  expect(smallest(param, currentIndex, limit)).toBe(2);
});
