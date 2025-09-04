#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    const int N = 1e5+10;

    // This will store divisors of 2, 3, 4, .... N
    // First iteration (i = 2 then enters inner loop)
    // divisors[2] = {2} 
    // divisors[4] = {2} 
    // divisors[6] = {2} 
    // ....
    // Second iteration (i = 3 then enters inner loop)
    // divisors[3] = {3}
    // divisors[6] = {2, 3}
    // divisors[9] = {3}
    // ... and so on

    vector<int> divisors[N]; 
     
    // Ignoring 0 as it doesn't divide any number.
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            divisors[j].push_back(i);
        }
    }

    // Print divisors of numbers 1 to 10
    for (int i = 1; i < 11; i++) {
        cout << i << ": ";
        for (int div: divisors[i]) {
            cout << div << " ";
        }
        cout << endl;
    }
    
    return 0;
}
