'use strict';

const store = (value) => {
    return () => value;
};

module.exports = store;

const value = store(5);
console.log(value());