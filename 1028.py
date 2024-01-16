import math as gcd

n = int(input())
for i in range(n):
    f1, f2 = input().split(" ")
    f1 = int(f1)
    f2 = int(f2)
    
    print(gcd.gcd(f1, f2))