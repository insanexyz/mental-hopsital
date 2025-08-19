#include <stdio.h>

int fib(int n) {
    if (n == 1 || n == 2) return n - 1;
    return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d\n", fib(n));
    
    return 0;
}
