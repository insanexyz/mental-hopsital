#include <iostream>

using namespace std;

int majority_element(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        // for each element re-scan the entire array and track its count
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {count ++;}
        }
        if (count > n/2) {
            return arr[i]; // return majority element immediately if found
        }
    }
    return -1; // if no majority element is present
}

int main(void)
{
    // Can use vector too
    int arr[] = {1, 2, 2, 3, 2, 3, 2, 4, 4, 2, 2, 2};
    int n = 12; // size of the array
    
    cout << "Majority element: " << majority_element(arr, n) << endl;

    return 0;
}
