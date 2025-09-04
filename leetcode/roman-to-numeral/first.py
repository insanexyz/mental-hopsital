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
        if ((s[i] == "I") and (i+1 <= len(s) - 1) and (s[i+1] == "V" or s[i+1] == "X")):
            num += -1*sym[s[i]]
        elif ((s[i] == "X") and (i+1 <= len(s) - 1) and (s[i+1] == "L" or s[i+1] == "C")):
            num += -1*sym[s[i]]
        elif ((s[i] == "C") and (i+1 <= len(s) - 1) and (s[i+1] == "D" or s[i+1] == "M")):
            num += -1*sym[s[i]]
        else:
            num += sym[s[i]]        
    
    return num


while (1):
    num = input("Enter RM: ")
    print(romanToInt(num))
