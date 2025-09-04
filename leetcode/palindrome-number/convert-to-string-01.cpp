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
    string rev = "";

    // Reverse the string and store in rev.
    for (int i = num.length() - 1; i >= 0; i--) {
        rev += num[i];
    }

    // Check if original string and reversed string are equal.
    if (num == rev) return true;
    else return false;
}

int main(void) {
    
    int x = 121;
    cout << isPalindrome(x) << endl;    
 
    return 0;
}
