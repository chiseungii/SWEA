for i in range(int(input())):
    a = list(map(int, input().split()))

    avg = sum(a) / 10 + 0.5
    print("#%d %d" % (i + 1, int(avg)))
