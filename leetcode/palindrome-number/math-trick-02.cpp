#include <iostream>

using namespace std;

// Without converting number to string

bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x == 0) return true;

    int first_digit_extractor = 1;
    // Instead of using countDigits() method.
    while (x >= first_digit_extractor * 10) {
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