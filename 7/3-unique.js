'use strict';

const unique = (arr) => {
    const result = [];
    for (const item of arr) {
        if(!result.includes(item)) {
            result.push(item);
        }
    }
    return result;
};

const myArray = ['bibip', 'bibip', 'lol', 'kek']
const uniqueArray = unique(myArray);

console.log(uniqueArray);

module.exports = unique;