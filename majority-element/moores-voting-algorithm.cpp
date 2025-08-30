#include <iostream>

using namespace std;

int majority_element(int arr[], int n) {
    
    int candidate = 0; // This acts as the potential majority element.
    int count = 0;     // Used to determine if the candidate is a potential majority element or not.

    for (int i = 0; i < n; i++) {
        // If count is 0 then set current element as candidate.
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else {
            // If current element is same as candidate then increment count.
            if (candidate == arr[i]) {
                count++;
            } else {
                count--; // If current element is not same as candidate then decrement count.
            }
        }
    }

    // Final count value is meaningless. Only the candidate value at last is meaningfull.
    // Maybe if count = 0 atlast then for sure no majority element in the array (maybe).
    // The candidate at the end only has a chance of being majority element and no other element.
    // Basic intuition of the algorithm: If a element occurs more than N/2 times then it cannot be cancelled (look the simple example version). Very simplified way of thinking as their is no gaurantee final candidate is a majority element.

    // Confirm if the final candidate is a majority element.
    int tmp_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            tmp_count++;
        }
    }
    
    // Return canidate as majority element or -1 is no majority element is present in the array/ vector.
    return (tmp_count > n/2) ? candidate: -1;
}

int main(void)
{
    // vector can also be used.
    int arr[] = {2, 1, 2, 3, 2, 4, 2, 5, 2, 6, 2, 2};
    int n = 12;
    
    cout << "Majority element: " << majority_element(arr, n) << endl;
    
    return 0;
}
