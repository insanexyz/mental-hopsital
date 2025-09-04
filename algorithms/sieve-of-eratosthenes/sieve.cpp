#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int N;
    cout << "Enter N: ";
    cin >> N; 
    
    // Vector size N filled with all true
    // We assume its 0,1,2,3,....,N-1
    vector<bool> isPrime(N, 1);
    isPrime[0] = isPrime[0] = false;     // since 0 and 1 is non prime
    
    for (int i = 2; i < N; i++) {
        // 2 is a prime and we start from their
        if (isPrime[i] == true) {
            // Mark multiple of i as non prime (excluding i as its prime)
            for (int j = 2 * i; j < N; j += i) {
                isPrime[j] = false;
            }
        }   
    }

    // Print the prime numbers
    for (int i = 2; i < N; i++) {
        if (isPrime[i] == true) { cout << i << " "; }
    }
    cout << endl;

    return 0;
}
