#include <iostream>

using namespace std;

int main(void)
{
    // Sum of divisors
    // Eg: n = 10
    // divisors of 10 = 1, 2, 5 (exclude 10 itself)
    // so the sum is 1 + 2 + 5 = 8 (we include 1 here though)
    // This program does this for 1 to n and displays it as a list of items

    cout << "Enter n: ";
    int n;
    cin >> n;
    
    int sum[n+1] = {0};

    // i is the divisor
    // j is the dividend
    // j % i = 0
    for (int i = 1; i < n+1; i++) {
        for (int j = i; j < n+1; j+=i) {
            // Exclude if divisor = dividend as its trivial case (optional)
            if (j != i)
                sum[j] += i;
        }
    }

    // Display the sum array
    for (int i = 1; i < n+1; i++) {
        cout << i << ": " << sum[i] << endl;
    } 
}
