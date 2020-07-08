for i in range(int(input())):
    n = list(map(int, input().split()))

    sum = 0
    for ni in n:
        if ni % 2: sum += ni

    print("#%d %d" % (i + 1, sum))
