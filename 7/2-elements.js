'use strict';

const removeElements = (arr, item1 , item2) => {
    for (const item of [item1, item2]) {
        const index = arr.indexOf(item);
        if (index !== -1) {
            arr.splice(index, 1);
        }
    }
}

const myArray = [1, 2, 3, 4, 5];
removeElements(myArray, 2, 4);

console.log(myArray);

module.exports = removeElements;