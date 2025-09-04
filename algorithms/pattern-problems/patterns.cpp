#include <iostream>
#include <algorithm>
using namespace std;

void print1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void print2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void print3(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print4(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < i + 1; j++) {
            cout << i + 1  << " ";
        }
        cout << endl;
    }
}

void print5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void print6(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n + 1 - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print7(int n) {

    /*
    // Method 1
    for (int i = 0; i < n; i++) {

        // Prints first half
        //     *
        //    **
        //   ***
        //  ****
        // *****
        for (int j = 0; j < n; j++) {
            if (j < n - i - 1)
                cout << " ";
            else
                cout << "*";
        }

        // Prints second half -
        //
        //      *
        //      **
        //      ***
        //      ****
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    */


    // Method 2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print8(int n) {

    /*
    // Method 1
    for (int i = 0; i < n; i++) {
        // Prints first half -
        // *****
        //  ****
        //   ***
        //    **
        //     *
        for (int j = 0; j < n; j++) {
            if (j < i)
                cout << " ";
            else
                cout << "*";
        }

        // Prints second half -
        //      ****
        //      ***
        //      **
        //      *
        //
        for (int k = 0; k < n - i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    */


    // Method 2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print9(int n)
{
    // For n = 5

    // Prints first part -
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Prints second half -
    // *******
    //  *****
    //   ***
    //    *
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print10(int n) {
    /*
    // Method 1
    // Considering n as till the row with maximum stars
    // Therefore n = 5

    // Prints first half -
    // *
    // **
    // ***
    // ****
    // *****
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Prints second half -
    // ****
    // ***
    // **
    // *
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    */

    // Method 2
    // Here we consider n = total number of rows
    // Therefore n = 9

    for (int i = 0; i < 2 * n - 1; i++) {
        int stars = i + 1;
        if (i > n - 1) stars = ((2 * n) - (i + 1));
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print11(int n) {
    short flip = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) flip = 1;
        else flip = 0;
        for (int j = 0; j < i + 1; j++) {
            cout << flip << " ";
            flip = 1 - flip;
        }
        cout << endl;
    }
}

void print12(int n) {
    for (int i = 0; i < n; i++) {
        // first half
        for (int j = 0; j < i + 1; j++) {
            cout << j + 1;
        }

        // spaces
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }

        // second half
        for (int j = i + 1; j > 0; j--) {
            cout << j;
        }

        cout << endl;
    }
}

void print13(int n) {
    int x = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << x++ << " ";
        }
        cout << endl;
    }
}


void print14(int n) {
    /*
    // Method 1
    for (int i = 0; i < n; i++) {
        char x = 'A';
        for (int j = 0; j < i + 1; j++) {
            cout << x;
            x = x + 1;
        }
        cout << endl;
    }
    */

    /*
    // Method 2
    for (char i = 'A'; i < 'A' + n; i++) {
        for (char j = 'A'; j < i + 1; j++) {
            cout << j;
        }
        cout << endl;
    }
    */

    // Method 3
    for (int i = 0; i < n; i++) {
        for (char j = 'A'; j < 'A' + i + 1; j++) {
            cout << j;
        }
        cout << endl;
    }
}


void print15(int n) {
    /*
    // Method 1
    for (int i = 0; i < n; i++) {
        char x = 'A';
        for (int j = 0; j < n - i; j++) {
            cout << x;
            x = x + 1;
        }
        cout << endl;
    }
    */


    for (int i = 0; i < n; i++) {
        for (char j = 'A'; j < 'A' + (n - i); j++) {
            cout << j;
        }
        cout << endl;
    }
}

void print16(int n) {
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

void print17(int n) {

    /*
    // Method 1
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < (n - i - 1); j++) {
            cout << ' ';
        }

        // chars
        char ch = 'A';
        for (int j = 0; j < i + 1; j++) {
            cout << ch++;
        }

        ch = ch - 2;
        for (int j = 0; j < i; j++) {
            cout << ch--;
        }

        cout << endl;
    }
    */

    // Method 2
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < (n - i - 1); j++) {
            cout << ' ';
        }

        // chars
        char ch = 'A';
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j < i) {
                cout << ch++;
            } else {
                cout <<  ch--;
            }
        }

        cout << endl;
    }

    // No need to print the end spaces for each row.
    // Save computation yay!
}

void print_18(int n) {
    // Method 1
    // char ch = 'E';
    // for (int i = 0; i < n; i++) {
    //     char start_char = ch;
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << ch++ << " ";
    //     }
    //     ch = start_char - 1;
    //     cout << endl;
    // }

    // Method 2
    for (int i = 0; i < n; i++) {
        for (char ch = 'E' - i; ch < 'E' + 1; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}


void print_19(int n) {

    // Method 1
    // First half
    for (int i = 0; i < n; i++) {

        /////////////////////
        // Second quadrant //
        /////////////////////
        // stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // spaces
        for (int k = 0; k < i; k++) {
            cout << " ";
        }


        ////////////////////
        // First quadrant //
        ////////////////////
        // spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // stars
        for (int k = 0; k < n - i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    // Second half
    for (int i = 0; i < n; i++) {

        ////////////////////
        // Third quadrant //
        ////////////////////

        // stars
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }

        // spaces
        for (int k = 0; k < n - i - 1; k++) {
            cout << " ";
        }


        /////////////////////
        // Fourth quadrant //
        /////////////////////

        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // stars
        for (int k = 0; k < i + 1; k++) {
            cout << "*";
        }

        cout << endl;
    }


    // Method 2
    // First half
    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < 2*i; j++) {
            cout << " ";
        }

        // stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Second half
    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 0; j < i + 1; j++) {
             cout << "*";
        }

        // spaces
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }

        // stars
        for (int j = 0; j < i + 1; j++) {
             cout << "*";
        }

        cout << endl;
    }
}

void print_20(int n) {

    // Method 1
    // First half
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i + 1; j++) {
    //         cout << "*";
    //     }

    //     for (int j = 0; j < 2 * (n - i - 1); j++) {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < i + 1; j++) {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // // Second half
    // // i = 1 so we can skip i = 0 line printing twice
    // for (int i = 1; i < n; i++) {
    //     for (int j = 0; j < n - i; j++) {
    //         cout << "*";
    //     }

    //     for (int j = 0; j < 2 * i; j++) {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < n - i; j++) {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // Method 2
    // First half
    int spaces = 2 * n;
    int stars = 0;
    for (int i = 0; i < 2 * n - 1; i++) {
        if (i >= n) {
            stars = 2 * n - i - 1;
            spaces += 2;
        } else {
            stars = i + 1;
            spaces -= 2;
        }

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

void print_21(int n) {

    // // Method 1
    // for (int i = 0; i < n; i++) {

    //     if ((i == 0) || (i == n - 1)) {
    //         for (int j = 0; j < n; j++) {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     } else {
    //         cout << "* ";
    //         for (int j = 0; j < n - 2; j++) {
    //             cout << "  ";
    //         }
    //         cout << "*" << endl;
    //     }
    // }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}


void print_22(int n) {
    // method 1
    // for (int i = 0; i < 2 * n - 1; i++) {
    //     for (int j = 0; j < 2 * n - 1; j++) {
    //         int top_dist = i;
    //         int bottom_dist = (2 * n - 1) - i - 1;
    //         int left_dist = j;
    //         int right_dist = (2 * n  - 1) - j - 1;

    //         // For
    //         // n = 2 -> max dist - 0
    //         // n = 3 -> max dist - 1
    //         // n = 4 -> max dist - 2
    //         // n = 5 -> max dist - 3
    //         // n = n -> max dist - (n - 2)
    //         cout << max(max(top_dist, bottom_dist), max(left_dist, right_dist)) - (n - 2) << " ";
    //     }
    //     cout << endl;
    // }


    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top_dist = i;
            int bottom_dist = (2 * n - 1) - i - 1;
            int left_dist = j;
            int right_dist = (2 * n  - 1) - j - 1;

            cout << n - min(min(top_dist, bottom_dist), min(left_dist, right_dist))<< " ";
        }
        cout << endl;
    }
}

// void print_23(int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (j < n - i - 1)
//                 cout << " ";
//             else
//                 cout << "* ";
//         }
//         cout << endl;
//     }
// }


int main(void)
{
    print_22(5);
}
