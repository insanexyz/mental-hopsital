# Array rotation by k

We simply move each elements in array by k.

```
Example:
nums = [1, 2, 3, 4, 5]
k = 2
So element 1 whose initial position is 0 will now be moved to 0 + 2 = 2 position.
Same applies for all elements

But notice for element 4, initial position is 3 and 3 + 2 = 5 which is out of bounds.
So we use a formula -> initial_position + k % length_of_array
now, (3 + 2) % 5 = 0 -> so element 4 is placed at index 0.

Similarly element 5 will be placed at index 1

Final output = [4, 5, 1, 2, 3]

You also see it like this way

k = 2
So take last two elements [4, 5] and place them at first.
Then take remaining elements [1, 2, 3] and place them after 4 and 5.

This is true for any value of k. A shortcut way.
```

## Simple.java
```java
ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
int k = 3;
int[] tmp = new int[nums.size()];

for (int i = 0; i < nums.size(); i++) {
    tmp[(i + k) % nums.size()] = nums.get(i);
}

for (int i = 0; i < tmp.length; i++) {
    nums.set(i, tmp[i]);
}

System.out.println(nums);
```

### Time complexity
``T = O(n)``

### Space complexity
``T = O(n)``

## Better.java

```java
public static void main(String[] args) {
    
    ArrayList<Integer> nums = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
    int k = 3;

    reverse(nums, 0, nums.size());
    reverse(nums, 0, k);
    reverse(nums, k, nums.size() - k);

    System.out.println(nums);
}

public static void reverse(ArrayList<Integer> al, int start, int len) {
    int end = start + len - 1;
    while(start < end) {
        int tmp = al.get(start);
        al.set(start, al.get(end));
        al.set(end, tmp);
        start++;
        end--;
    }
}
```

Only improves space complexity as no tmp array is used.

### Time complexity
``T = O(n)``

### Space complexity
``S = O(1)``


## BlockSwap.java

Not yet implemented.
