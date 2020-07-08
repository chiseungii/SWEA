SCISSORS = 1; ROCK = 2; PAPER = 3

A, B = map(int, input().split())

if A == SCISSORS:
    if B == ROCK: print("B")
    else: print("A")
elif A == ROCK:
    if B == SCISSORS: print("A")
    else: print("B")
else:
    if B == SCISSORS: print("B")
    else: print("A")
