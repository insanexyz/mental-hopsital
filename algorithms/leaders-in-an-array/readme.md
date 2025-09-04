# Leaders in an array
A element is leader in an array if every element on its right is smaller than it.

Example:
```
array[] = {5, 14, 5, 9, 6, 9, 4, 2, 3}

- 0: 5 = not a leader -> as 14 > 5
- 1: 14 = leader -> all elements to its right (5, 9, 6, 0, 4, 2, 3) are smaller than it
- 2: 5 = not a leader again
- 3: 9 = not a leader as of now
- 4: 6 = leader
- 5: 9 = now it is a leader
- 6: 4 = leader
- 7: 2 = not a leader
- 8: 3 = leader
```

Observations
1. last element is always a leader.
2. Leaders array/ vector can also be sorted and then displayed.
3. For optimal solution we scan the array from right to left.


## brute-force.cpp

### Time complexity
```cpp
for (int i = 0; i < n; i++) {
    bool is_leader = true;
    for (int j = i+1; j < n; j++) {
        if (arr[i] <= arr[j]) {
            is_leader = false;
            break;
        }
    }  
    if (is_leader == true) {
        leaders.push_back(arr[i]);
    }
}
```
1. Outer loop runs for n times.
2. Inner loops runs approx n times to make calculations easy.
Therefore:
``T = O(n^2)``

### Space complexity
``S = O(n)``


## optimal-way.cpp

### Time complexity
```cpp
for (int i = n - 1; i >= 0; i--) {
    if (arr[i] > max) {
        max = arr[i];
        leaders.push_back(arr[i]);
    }
}
```
Loop simply runs n time.
``T = O(n)``

### Space complexity
``S = O(n)``
