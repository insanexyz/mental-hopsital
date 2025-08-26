#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    const vector<int> arr = {5, 14, 5, 9, 6, 9, 4, 2, 3};
    vector<int> leaders;
    int n = arr.size(); 
    
    // brute force logic
    for (int i = 0; i < n; i++) {
        bool is_leader = true;
        // Traverse for each element and check if anything is greater than it.
        for (int j = i+1; j < n; j++) {
            // Leader should be strictly greater than all the elements to its right.
            if (arr[i] <= arr[j]) {
                is_leader = false;
                break;
            }
        }  
        if (is_leader == true) {
            leaders.push_back(arr[i]);
        }
    }
    
    // Display the leaders
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    cout << endl;
}
