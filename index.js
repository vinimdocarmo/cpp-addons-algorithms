var algorithms = require('bindings')('algorithms');

var arr = [3, 6, 1, 4, 5, 10, 1];

algorithms.insertionSort(arr);

console.log(arr);
