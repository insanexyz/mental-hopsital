# Intro
We pre computed prime numbers for a big value of N, then modified the code a little to use this pre computed result to find other things.


## highest\_lowest\_prime.cpp

To find highest and lowest prime factor for all numbers from 1 to some number `num`.


## prime\_factors.cpp

Continuation of the results above `highest_lowest_prime.cpp` file.

To find prime factors of some number `num`.

### Time complexity
```cpp
vector<int> prime_factors;
while (N > 1) {
    int prime_factor = highest_prime[N];
    while (N % prime_factor == 0) {
        N = N / prime_factor;
        prime_factors.push_back(prime_factor);
    }
}
```
T = log(n)


## divisors.cpp
Modifying the sieve algorithm code to find divisors of numbers 1, 2, 3, .... N

### Time complexity
```
for (int i = 1; i < N; i++) {
    for (int j = i; j < N; j += i) {
        divisors[j].push_back(i);
    }
}
```
T = O(N * log(N))




