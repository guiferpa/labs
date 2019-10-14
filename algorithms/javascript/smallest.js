const smallest = (items, index, limit) => {
    if (!Array.isArray(items)) {
      throw "Parameter isn't an array"
    }

    let smallestIndex = index;

    for (let currentIndex = smallestIndex; currentIndex < limit; currentIndex++) {
      if (items[currentIndex] < items[smallestIndex]) {
        smallestIndex = currentIndex;
      }
    }

    return smallestIndex;
}

module.exports = smallest;
