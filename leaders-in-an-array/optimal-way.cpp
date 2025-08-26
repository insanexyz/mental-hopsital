#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(void)
{
    const vector<int> arr = {5, 14, 5, 9, 6, 9, 4, 2, 3};
    vector<int> leaders;
    int n = arr.size(); 
    
    // Set initial max as some very low number.
    int max = INT_MIN;

    // Start iterating from the back to index 0.
    for (int i = n - 1; i >= 0; i--) {
        // At first 3 is bigger than INT_MIN so its a leader and new rightmost max is 3.
        // Then 4 is bigger than 3 so its a leader and new rightmost max is 4.
        // Then 2 is not bigger than 3 which is the rightmost max, so its not a leader. Rightmost max remains 3.
        // Then 9 is bigger than 4 so its a leader and new rightmost max is 9.
        // And so on.
        if (arr[i] > max) {
            max = arr[i];
            leaders.push_back(arr[i]); // Can push back max too.
        }
    }

    // Display the leaders.
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    cout << endl;

    return 0;
}
