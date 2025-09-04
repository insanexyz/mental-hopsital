# Palindrome number

Good video tutorial - https://www.youtube.com/watch?v=yubRKwixN-U

## math-trick-01/02.cpp
```
    1 2 2 1

    // First iteration

    Get a first digit extractor or some div like 100 for x = 121, 1000 for x = 1221, etc.

    Extract first digit -
    1221 / 1000 = 1

    Extract last digit -
    1221 % 10 = 1

    Compare both -
    1 == 1, if true continue to chop the first and last digit otherwise return false confirming number isn't palindrome.

    Chop off first digit -
    1221 % 1000 = 221

    Chop off last digit -
    221 / 10 = 22


    // Second iteration
    The 1000 we used now will get two zeros reduced = 10.
    This is because our original digit 1 2 2 1 was also reduced by two digits.

    Extract first digit -
    22 / 10 = 2

    Extract last digit -
    22 % 10 = 2

    Compare them both
    2 == 2 (true, so continue and chop them off, otherwise return false)

    Chop of first digit -
    22 % 10 = 2

    Chop of last digit -
    22 % 10 = 0

    Number got reduced to 0 so return true or exit loop. This confirms number is palindrome.


    // Odd number case
    If the number was odd count like 1 2 2 2 1.

    At last we would be remaining with 2 instead of 22 (two numbers) and first digit extractor or div would reduce down to 1.

    Just do the same process

    // Extract first digit -
    2 / 1 = 2

    // Extract last digit -
    2 % 10 = 2

    // Compare them both
    2 == 2 so continue to chop it

    // Chop first digit -
    2 % 1 = 0

    // Chop last digit - 
    2 / 10 = 0

    Now we remain again with 0, so return true.


    // Note
    If a number isn't palindrom then during comparing phase like 2 == 2 (first digit == last digit) it would return false, otherwise the number go on to reduce till 0 which confirms its a palindrome.
```
