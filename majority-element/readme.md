# Majority element

## What is majority element?
Let N = length of the array <br>
Then any element in the array which strictly occurs more than N/2 times is a majority element.

Example
```
arr[] = {1, 2, 2, 3, 2, 3, 2, 4, 4, 2, 2, 2};
N = 12
N/2 = 6

Element Counts
1       1
2       7
3       2
4       2

Therefore here ``2`` is a majority element. 

Their can always only be one majority element in an array.
```


## brute-force.cpp
```cpp
int majority_element(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {count ++;}
        }
        if (count > n/2) {
            return arr[i];
        }
    }
    return -1;
}
```

### Time complexity
``T = O(N^2)``

### Space complexity
``S = O(1)``


## hash-map.cpp
```cpp
int majority_element(int arr[], int n) {
    map<int, int> mp; 
    // T = O(N)
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    
    // T = O(N)
    for (auto iter: mp) {
        if (iter.second > n / 2) {
            return iter.first;
        }
    } 

    return -1;
}
```

### Time complexity
``T = O(N) + O(N) = O(N)``

### Space complexity
``S = O(N)``


## moores-voting-algorithm.cpp
```cpp
int majority_element(int arr[], int n) {
    
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else {
            if (candidate == arr[i]) {
                count++;
            } else {
                count--;
            }
        }
    }
}
```

### Time complexity
``T = O(N)``

### Space complexity
``S = O(1)``

