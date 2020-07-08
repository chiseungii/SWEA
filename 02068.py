for i in range(int(input())):
    a = list(map(int, input().split()))
    print("#%d %d" % (i + 1, max(a)))
