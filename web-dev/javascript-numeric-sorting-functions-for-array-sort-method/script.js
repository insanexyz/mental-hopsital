function compareNumeric(a, b) {
  if (a > b) return 1; // Return any positive value to make a greater than b
  if (a == b) return 0;
  if (a < b) return -1; // Return any negative value to make b greater than a
}

// Usage
let arr = [1, -2, 15, 2, 0, 8];
arr.sort(compareNumeric);

// Shorter versions of the same function
// arr.sort(function(a, b) { return a - b; });
// or use
// arr.sort( (a, b) => a - b );


// Otherwise
// The items are sorted as strings by default.
// Literally, all elements are converted to strings for comparisons. For strings, lexicographic ordering is applied and indeed "2" > "15".

