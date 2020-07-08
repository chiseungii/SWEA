s = input()

result = ""
for i in range(len(s)):
    if s[i].isalpha():
        result += s[i].upper()
    else: result += s[i]

print(result)
