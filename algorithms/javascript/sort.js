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
  for (let currentIndex = 0; currentIndex < length -1; currentIndex++) {
    const smallestIndex = smallest(items, currentIndex, items.length);
    items = items.replace(smallestIndex, currentIndex);
  }

  return items;
}

const insertion = (items, length) => {
  for (currentIndex = 1; currentIndex < length; currentIndex++) {
    let analyzeIndex = currentIndex;

    while (items[analyzeIndex] < items[analyzeIndex -1]) {
      items = items.replace(analyzeIndex, analyzeIndex -1);
      analyzeIndex--;
    }
  }

  return items;
}

module.exports = {
  selection,
  insertion
};
