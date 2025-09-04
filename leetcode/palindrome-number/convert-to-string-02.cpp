#include <iostream>
#include <string>

using namespace std;


bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    if (x == 0) {
        return true;
    }

    string num = to_string(x);

    // Half iterate original string and check if first and last are equal, then if second and second last are equal and so on.
    for (int i = 0; i < num.length() / 2; i++) {
        if (num[i] != num[num.length() - i - 1])
            return false;
    }

    return true;
}

int main(void)
{
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(-121) << endl;
    cout << isPalindrome(12231) << endl;
    cout << isPalindrome(4444) << endl;
}