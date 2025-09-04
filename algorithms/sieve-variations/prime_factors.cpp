#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    // Using exsiting sieve algorithm to find the all the prime factors of some number (num)

    const int N = 1e7+10; 
    
    // Using N+1 to include N itself
    vector<int> prime(N+1, 1);
    vector<int> highest_prime(N+1, 0);
    vector<int> lowest_prime(N+1, 0);

    prime[0] = prime[1] = false; // 0 and 1 are non primes

    // What is prime factors?
    // Example: N = 45
    // Prime factors are 3, 5 - All the factors of 45 which are prime (not taking 45 and 1)

    for (int i = 2; i < N+1; i++) {   
        // At first i = 2 which is prime, after this all i will be automatically prime is marked as true
        if (prime[i] == true) {
            
            // Highest and lowest prime of a prime number is the prime number itself
            highest_prime[i] = lowest_prime[i] = i;
    
            // Mark multiple of i as non primes
            for (int j = 2 * i; j < N+1; j += i) {
                prime[j] = false;
                
                // Find highest prime 
                highest_prime[j] = i;
                
                // Find lowest prime
                if (lowest_prime[j] == 0) {
                    lowest_prime[j] = i; 
                }
            }
        }
    }
    
    
    // Get num to find its prime factors
    int num;
    cout << "Enter num: ";
    cin >> num;

    // Get the highest prime factor of num
    cout << "Highest prime factor of " << num << ": " << highest_prime[num] << endl;
    

    // Now to get prime factors of num we can use either its highest prime factor or lowest prime factor as starting point
    // num = 45
    // Iteration 1:
    // (45 > 1) -> true
    // highest_prime[45] = 3
    // goes to inner loop
    // 45 % 3 == 0 so num = 15 and 3 gets push back
    // 15 % 3 == 0 so num = 5 and 3 again gets push back
    // 5 % 3 != 0 so inner loops exits
    //
    // Iteration 2:
    // num = 5 now
    // (5 > 1) -> true
    // highest_prime[5] = 5
    // goes to inner loop
    // 5 % 5 == 0 so num = 1 and 5 gets push back
    // 1 % 5 != 0 so inner loop exits
    //
    // Iteration 3:
    // num = 1
    // (1 > 1) -> false so outer loops also exits.

    // Now 45 = 5 3 3 = 5 * 3 * 3

    vector<int> prime_factors;
    while (num > 1) {
        int prime_factor = highest_prime[num];
        while (num % prime_factor == 0) {
            num = num / prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }
    
    // Print the prime factors of num
    for (int pf: prime_factors) {
        cout << pf << " " ;
    }
    cout << endl;
    
    return 0;
}
