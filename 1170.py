n = int(input())

for i in range(n):
    c = float(input())
    count = 0
    while c > 1:
        c /= 2
        count += 1
    print('{} dias'.format(count))