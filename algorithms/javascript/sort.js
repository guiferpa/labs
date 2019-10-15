const smallest = require('./smallest');

Array.prototype.replace = function(origin, dest) {
  let items = this;
  const originItem = items[origin];
  const destItem = items[dest];

  items[origin] = destItem;
  items[dest] = originItem;

  return items;
}

const selection = (items, length) => {
  if (!Array.isArray(items)) {
    throw "Parameter isn't an array"
  }

  if (! Number.isInteger(length)) {
    throw "Parameter isn't an integer"
  }

  for (let currentIndex = 0; currentIndex < length -1; currentIndex++) {
    const smallestIndex = smallest(items, currentIndex, items.length);
    items = items.replace(smallestIndex, currentIndex);
  }

  return items;
}

const insertion = (items, length) => {
  if (!Array.isArray(items)) {
    throw "Parameter isn't an array"
  }

  if (! Number.isInteger(length)) {
    throw "Parameter isn't an integer"
  }

  for (currentIndex = 1; currentIndex < length; currentIndex++) {
    let analyzeIndex = currentIndex;

    while (items[analyzeIndex] < items[analyzeIndex -1]) {
      items = items.replace(analyzeIndex, analyzeIndex -1);
      analyzeIndex--;
    }
  }

  return items;
}

const interpolate = (items, initial, half, length) => {
  if (!Array.isArray(items)) {
    throw "Parameter isn't an array"
  }

  if (!Number.isInteger(initial) || !Number.isInteger(half) || !Number.isInteger(length)) {
    throw "Parameter isn't an integer"
  }

  let beginnerIndex = initial;
  let middleIndex = half;
  
  let currentIndex = 0;
  let interpolatedItems = new Array(length);

  while (beginnerIndex < half && middleIndex < length) {
    const itemFromFirstPiece = items[beginnerIndex];
    const itemFromSecondPiece = items[middleIndex];

    if (itemFromFirstPiece < itemFromSecondPiece) {
      interpolatedItems[currentIndex] = itemFromFirstPiece;
      beginnerIndex++;
    } else {
      interpolatedItems[currentIndex] = itemFromSecondPiece;
      middleIndex++;
    }

    currentIndex++;
  }

  while (beginnerIndex < half) {
    const itemFromFirstPiece = items[beginnerIndex];
    interpolatedItems[currentIndex] = itemFromFirstPiece;
    beginnerIndex++;
    currentIndex++;
  }

  while (middleIndex < length) {
    const itemFromSecondPiece = items[middleIndex];
    interpolatedItems[currentIndex] = itemFromSecondPiece;
    middleIndex++;
    currentIndex++;
  }

  return interpolatedItems;
}

const merge = (items, initial, length) => {
  if (!Array.isArray(items)) {
    throw "Parameter isn't an array"
  }

  if (!Number.isInteger(initial) || !Number.isInteger(length)) {
    throw "Parameter isn't an integer"
  }

  if (length == 1) return items;

  const middle = Math.floor((length - initial) / 2);
  const firstSlice = items.slice(initial, middle);
  const secondSlice = items.slice(middle, length);

  return interpolate([
    ...merge(firstSlice, 0, firstSlice.length), 
    ...merge(secondSlice, 0, secondSlice.length)
  ], initial, middle, length);
}

const partition = (items, initial, length) => {
  if (!Array.isArray(items)) {
    throw "Parameter isn't an array"
  }

  if (!Number.isInteger(initial) || !Number.isInteger(length)) {
    throw "Parameter isn't an integer"
  }

  let amountLessThan = initial;
  const pivotIndex = length - 1;
  const pivotItem = items[pivotIndex];

  for (let currentIndex = initial; currentIndex < pivotIndex; currentIndex++) {
    const currentItem = items[currentIndex];
    if (currentItem < pivotItem) {
      items = items.replace(currentIndex, amountLessThan);
      amountLessThan++;
    }
  }

  items = items.replace(pivotIndex, amountLessThan);

  return amountLessThan;
}

const quick = (items, initial, length) => {
  const amount = length - initial;
  if (amount > 1) {
    const pivot = partition(items, initial, length);
    quick(items, initial, pivot);
    quick(items, pivot +1, length);
  }
}

module.exports = {
  selection,
  insertion,
  interpolate,
  merge,
  partition,
  quick
};
