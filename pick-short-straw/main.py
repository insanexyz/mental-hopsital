# Joke code 😄

import random

straw = []
picked = []

num = int(input("How many users? "))

for i in range(num):
    straw.append(random.randint(1, 10))

# pick straw
d = {}

# I no use functions, cope

for i in range(num):
    username = input("Enter your username: ")
    wow = input("Press y to pick a straw: ")
    if (wow.lower() == "y"):
        print("Straw picked")
    else:
        print("Picking straw for you anyway get rekt.")
    print()

    while True:
        chosen_straw  = straw[random.randint(0, num-1)]
        if chosen_straw not in picked:
            break
        else:
            picked.append(chosen_straw)
            
    d[username] = chosen_straw


# display
print(d)


