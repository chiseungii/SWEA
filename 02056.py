days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

for i in range(int(input())):
    date = int(input())

    year = date // 10000
    month = date % 10000 // 100
    day = date % 100

    if month < 1 or month > 12 or day < 1 or day > days[month - 1]:
        print("#%d -1" % (i + 1))
    else:
        print("#%d %04d/%02d/%02d" % (i + 1, year, month, day))
