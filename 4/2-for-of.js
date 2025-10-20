'use strict';

const sum = (...args) => {
    let value = 0;
    for (const arg of args) {
        value += arg;
    }
    return value;
}

const a = sum(1, 2, 3);        
const b = sum(0);              
const c = sum();               
const d = sum(1, -1, 1);       
const e = sum(10, -1, -1, -1); 

console.log(a, b, c, d, e);