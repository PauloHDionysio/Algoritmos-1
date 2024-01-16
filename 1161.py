while True:
    try:
        n1, n2 = input().split(' ')
        n1 = int(n1)
        n2 = int(n2)
        fat1 = 1
        fat2 = 1

        if n1 != 0:
            for n1 in range(n1, 1, -1):
                fat1 *= n1
        else:
            fat1 = 1

        if n2 != 0:
            for n2 in range(n2, 1, -1):
                fat2 *= n2
        else:
            fat2 = 1

        soma_total = fat1 + fat2
        print(soma_total)
    except EOFError:
        break