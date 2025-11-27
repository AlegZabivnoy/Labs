'use strict';

const contract = (fn, ...types) => (...args) => {
    for (let i = 0; i < types.length - 1; i++) {
        const arg = args[i];
        const def = types[i];
        const name = def.name.toLowerCase();

        if (typeof arg !== name) {
            throw new TypeError(`Argument ${i + 1} must be of type ${name}`);
        }
    }

    const res = fn(...args);
    const def = types[types.length - 1];
    const name = def.name.toLowerCase();

    if (typeof res !== name) {
        throw new TypeError(`Result type ${name} expected`);
    }

    return res;
};

module.exports = { contract };

const add = (a, b) => a + b;
const contractedAdd = contract(add, Number, Number, Number);

console.dir(contractedAdd(2, 3)); 

const concat = (s1, s2) => s1 + s2;
const contractedConcat = contract(concat, String, String, String);

console.log(contractedConcat('Hello, ', 'World!')); 