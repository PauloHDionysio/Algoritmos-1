testes = int(input())
sum = 0

for i in range(testes):
    r1, r2 = input().split(" ")
    r1 = int(r1)
    r2 = int(r2)
    sum = r1 + r2
    print(sum)