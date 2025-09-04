def sum(n):
    // safe case (optional)
    if (n < 0)
        return -1

    if n == 0 or n == 1:
        return n
    return n + sum(n - 1)

print(sum(3))
