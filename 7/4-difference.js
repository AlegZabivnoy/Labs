'use strict';

const difference = (arr1, arr2) => {
    const arr=[];
    for (const item of arr1) {
        if (!arr2.includes(item)) {
            arr.push(item);
        }
    }
    return arr;
}

const array1 = [1, 2, 3, 4, 5];
const array2 = [2, 4];

const result = difference(array1, array2);

console.log(result);

module.exports = difference;