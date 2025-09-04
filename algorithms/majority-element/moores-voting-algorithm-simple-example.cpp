#include <iostream>

using namespace std;

int majority_element(int arr[], int n) {

    // This is a simplified version of moore's voting algorithm, where the algorithm always works. For this array must have odd number of elements and only two distinct members.

    int candidate  = 0; // Will act as the potential candidate for majority element 
    int count = 0;      // This will be used to determine if a element is majority element

    // Example
    // Start: candidate = 0 (unused), count = 0.
    // Loop starts
    // index 0 (value 2): count is 0 → set candidate = 2, count = 1.
    // index 1 (value 2): equals candidate → count = 2.
    // index 2 (value 1): not equal to candidate → count = 1 (one 2 cancelled by one 1 or a non matching element).
    // index 3 (value 1): not equal to candidate → count = 0 (second 2 cancelled by another 1 or a non matching element).
    // So two 2's got cancelled by 2 other non matching element, which means for now it can't be majority element as it has to be greater in number than the amount of non matching elements. Their can be only one majority element in the array.
    // index 4 (value 2): count is 0 → set candidate = 2 (again), count = 1.
    // The array ends and with candidate = 2 and count = 1 (which is greater than 1). Which means this particular element 2 is greater in number than non matching elements. Which is only possible if 2 occurs more than N/2 times.
    // Therefore 2 is the final majority element.
    // Now this always works here because array has only 1 and 2 (2 distinct element) as the elements. Final candidate is not a gauranteed majority element in real scenarios even if count > 0. For example : {1, 1, 2, 2, 3}. In this array final candidate = 3 and count = 1 but  3 is not a majority element!
    // Therefore if count > 0 then the final candidate is only a potential majority element which needs to checked with another simple loop.
    
    for (int i = 0; i < n; i++) {
        // If count is 0 then set candidate as current element
        if (count == 0) {
            candidate = arr[i];
            count++;
        } else {
            // If element matches candidate, increment count
            if (arr[i] == candidate) {
                count++;
            } else {
                // If element doesn't matches candidate, decrement count
                count--;
            }
        }
    }
    
    // For this simple case if count > 0 then candidate is the majority element
    if (count > 0) {
        return candidate;
    } else {
        return -1; // No majority element is present in the array
    }
    
}

int main(void)
{
    // Taking smaller a array
    int arr[] = {2, 2, 1, 1, 2};
    int n = 5;

    cout << "Majority element: " << majority_element(arr, n) << endl;

    return 0;
}
