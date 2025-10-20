'use strict';

const sum = (...args) => {
    let value = 0;;
    while (args.length > 0) {
        value += args.shift();
    }
    return value;
}

const a = sum(1, 2, 3);        
const b = sum(0);              
const c = sum();               
const d = sum(1, -1, 1);       
const e = sum(10, -1, -1, -1); 

console.log(a, b, c, d, e);