# What is Sieve of Eratosthenes algorithm
It is used to find all the prime numbers for some given number N, from 0 to N.

A non prime is a number which can only be divided by 1 and itself.

```
Example: N = 12
Result = 2, 3, 5, 7, 9, 11
```

**Note**: 0 and 1 are non primes so we always start from 2.

<br>

---

<br>

# Time complexity

### Outer loop
Outer loop runs from 2 to N so its roughly N times ~= O(N) <br>
But this loop is inexpensive since it only does anything when condition to run inner loop is satisfied, so we can ignore it.

### Inner loop
```
1. for i = 2 it runs roughly N/2 times
2. for i = 3 it runs roughly N/3 times
3. for i = 5 it runs roughly N/5 times
4. for i = x it runs roughly N/x times (where x <= N)

Therefore T = N/2 + N/3 + N/5 + ....  (over primes <= N)
            = N ( 1/2 + 1/3 + 1/5 + ...... (over primes <= N) )
            ~= N * log(log((N))
            ~= O(N * log(log(N)) 
```

### Note
T(inner loop) >> T (outer loop)

### Final time complexity
T = O(N log log N) or O(N * log(log(N))


# Space complexity
``S = O(N) - For creating array/ vector of N size.``
