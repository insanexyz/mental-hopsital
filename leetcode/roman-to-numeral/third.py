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
    prev_value = 0
 
    for i in s:
        current_value = sym[i]
        if (current_value > prev_value):
            num += current_value + -2*prev_value
        else:
            num += current_value
        
        prev_value = current_value

    return num


while (1):
    num = input("Enter RM: ")
    print(romanToInt(num))
