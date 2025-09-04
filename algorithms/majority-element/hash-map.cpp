#include <iostream>
#include <map>
#include <string>

using namespace std;

int majority_element(int arr[], int n) {
    map<int, int> mp; 
    for (int i = 0; i < n; i++) {
        // Track count of each element.
        // By default if suppose mp[2] (2 is key) is not initialized then its respective value is 0.
        mp[arr[i]]++;
    }

    // Iterate the map and find the majority element
    for (auto iter: mp) {
        if (iter.second > n / 2) {
            return iter.first;
        }
    } 

    // Return -1 if not majority element is present
    return -1;
}

int main(void)
{

    int arr[] = {1, 2, 2, 3, 2, 3, 2, 4, 4, 2, 2, 2};
    cout << "Majority element: " << majority_element(arr, 12) << endl;
    return 0;
}
