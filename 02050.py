s = input()

for i in range(len(s)):
    print(ord(s[i]) - ord('A') + 1, end=' ')
print()
