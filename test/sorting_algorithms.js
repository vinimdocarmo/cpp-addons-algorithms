var algorithms = require('bindings')('algorithms'),
    expect = require('chai').expect;

describe('Sorting algorithms > ', function() {
   
   it('insertion sort', function() {
      var a = [200, 45, 7];

      algorithms.insertionSort(a);
      expect([7, 45, 200]).to.deep.equal(a);

      a = [345, 355, 6, 0, 1, 12, 544, 123, 333, 4556, 67, 5, 1, 1, 1];
      algorithms.insertionSort(a);
      expect([0, 1, 1, 1, 1, 5, 6, 12, 67, 123, 333, 345, 355, 544, 4556]).to.deep.equal(a);
   });

   it('selection sort', function () {
  	var a = [200, 45, 7];

	algorithms.selectionSort(a);
	expect([7, 45, 200]).to.deep.equal(a);

	a = [345, 355, 6, 0, 1, 12, 544, 123, 4556, 67, 5, 1, 1, 1];
	algorithms.selectionSort(a);
	expec([0, 1, 1, 1, 1, 5, 6, 12, 67, 123, 333, 345, 355, 544, 4556]).to.deep.equal(a);
   });

});
