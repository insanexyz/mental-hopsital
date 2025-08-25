# Time complexity

### Outer loop
Outer loop runs from 2 to N so its roughly N times ~= O(N) <br>
But this loop is inexpensive since it only does anything when condition to run inner loop is satisfied, so we can ignore it.

### Inner loop
1. for i = 2 it runs roughly N/2 times
2. for i = 3 it runs roughly N/3 times
3. for i = 5 it runs roughly N/5 times
4. for i = x it runs roughly N/x times (where x <= N)

Therefore T = N/2 + N/3 + N/5 + ....  over primes <= N <br>
            = N ( 1/2 + 1/3 + 1/5 + ...... ) over primes <= N <br>
            ~= N * log(log((N))
            ~= O(N * log(log(N)) 

### Note
T(inner loop) >> T (outer loop)

### Final time complexity
T = O(N log log N) or O(N * log(log(N))


