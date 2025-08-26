#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    const int N = 1e7+10; 

    vector<int> prime(N, 1);
    vector<int> highest_prime(N, 0);
    vector<int> lowest_prime(N, 0);

    // What is highest and lowest prime factor?
    // Example 1:
    // 10 = 5 * 2
    // 5 and 2 both are prime
    // 5 = highest prime
    // 2 = lowest prime 

    // Example 2:
    // 12 = 2 * 6
    // Here 2 is both highest and lowest prime
    
    // 0 and 1 have no prime factors so we skip it

    prime[0] = prime[1] = false; // 0 and 1 are non primes
    


    for (int i = 2; i < N; i++) {   
        // At first i = 2 which is prime, after this all i will be automatically prime if marked as true
        if (prime[i] == true) {
            
            // Highest and lowest prime factor of a prime number is the prime number itself
            // Eg = 11 = 11 * 1
            // Highest prime factor of 11 is 11 and lowest prime factor of 11 is 11
            highest_prime[i] = lowest_prime[i] = i;
    
            // Mark multiple of i as non primes
            for (int j = 2 * i; j < N; j += i) {
                prime[j] = false;
            
                // Note: j = non prime and i = prime
    
                // Highest prime factor of j will be i at the end, as i will divide j (i < j)
                // Eg: for j = 10, first i = 2 will mark it false
                //                 then  i = 5 will mark it false
                // Now i = 5 will be its highest prime factor
                // So we need to store i = 5 for j = 10
                // Therefore we need to keep on replacing to mark true highest prime for some j.
                highest_prime[j] = i;
                
                // For lowest prime factor only the first i which marks j as false will be the lowest prime factor
                // Eg: for j = 10, first i = 2 will mark it false
                // Now in other iterations i = 5 will also mark it but it won't be lowest prime
                // So we need to store only i = 2 for j = 10    
                if (lowest_prime[j] == 0) {
                    lowest_prime[j] = i; 
                }
            }
        }
    }
    
    
    // Get num
    int num;
    cout << "Enter num: ";
    cin >> num;

    // Print highest prime
    cout << "Highest primes" << endl;
    for (int i = 2; i < num; i++) {
        if (highest_prime[i] != 0) {
            cout << i << ": " << highest_prime[i] << endl;
        } 
    }

    cout << endl;

    // Print lowest primes
    cout << "Lowest primes" << endl;
    for (int i = 2; i < num; i++) {
        if (lowest_prime[i] != 0) {
            cout << i << ": " << lowest_prime[i] << endl;
        } 
    }

    return 0;
}
