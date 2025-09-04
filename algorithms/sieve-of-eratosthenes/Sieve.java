import java.util.Scanner;

public class Sieve {

    public static void sieve(int N) {
        // Assume array has elements 0, 1, 2, .... N-1
        boolean[] isPrime = new boolean[N];
        isPrime[0] = isPrime[1] = false;    // 0 and 1 are non prime
        
        // Make 2 to N-1 as prime
        for (int i = 2; i < N; i++) {
            isPrime[i] = true;
        }

        // (i*i<N) is just an optimization (optional) - as by the time we reach root(N) we would have cancelled out all the non primes from 2 to N
        for (int i = 2; i*i < N; i++) {
            // First element 2 is prime and we start from their
            if (isPrime[i] == true) {
                // Make multiples of i as non prime (false)
                // j=i*i is just an optimization (optional) - as i*2 to i*i are already marked as false in prev iteration
                for (int j = i*i; j < N; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        // Print all primes
        for (int i = 2; i < N; i++) {
            if (isPrime[i] == true) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }


    public static void main(String[] args) {
    
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter N: ");
        int N = sc.nextInt();
        sieve(N);
    }
}
