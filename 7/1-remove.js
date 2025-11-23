'use strict';

const removeElement = (arr, element) => {
    const index = arr.indexOf(element);
    if (index !== -1) {
        arr.splice(index, 1);
    }
};


const myArray = [1, 2, 3, 4, 5];
removeElement(myArray, 3);

console.log(myArray);

module.exports = removeElement;