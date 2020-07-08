for i in range(int(input())):
    a, b = map(int, input().split())

    if a == b: op = '='
    elif a < b: op = '<'
    else: op = '>'

    print("#%d %c" % (i + 1, op))
