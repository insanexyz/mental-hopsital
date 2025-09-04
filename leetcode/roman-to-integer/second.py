def romanToInt(s: str) -> int:
    
    sym = {
        "I": 1,
        "V": 5,
        "X": 10,
        "L": 50,
        "C": 100,
        "D": 500,
        "M": 1000
    }

    num = 0

    for i in range(0, len(s)):
        if (i+1 <= len(s) - 1) and sym[s[i]] < sym[s[i+1]]:
            num -= sym[s[i]]
        else:
            num += sym[s[i]]        
    
    return num


while (1):
    num = input("Enter RM: ")
    print(romanToInt(num))
