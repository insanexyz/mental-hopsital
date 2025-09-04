#include <iostream>

using namespace std;

// Without converting number to string

int countDigits(int x) {
    if (x == 0) {
        return 1;
    }

    int c = 0;
    while (x != 0) {
        x /= 10;
        c++;
    }

    return c;
}

bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x == 0) return true;

    int count = countDigits(x);

    int first_digit_extractor = 1;
    for (int i = 0; i < count - 1; i++) {
        first_digit_extractor *= 10;
    }

    while (x != 0) {
        // Extract first digit
        int first_digit = x / first_digit_extractor;

        // Extract last digit
        int last_digit = x % 10;

        // Compare both
        if (first_digit != last_digit) return false;

        // Chop of first digit
        x = x % first_digit_extractor;

        // Chop of last digit
        x = x / 10;

        // Reduce first digit extractor by 2 zeroes
        first_digit_extractor /= 100;
    }

    return true;
}

int main(void)
{
    int n;

    while (true) {
        cout << "Enter number: ";
        cin >> n;

        cout << isPalindrome(n) << endl;
    }

    return 0;
}