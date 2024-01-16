while True:
    try:
        total_de_lesmas = int(input())
        grupo = list(map(int, input().split()))
        lesma_mais_rapida = max(grupo)

        if lesma_mais_rapida < 10:
            print('1')
        elif 10 <= lesma_mais_rapida < 20:
            print('2')
        elif lesma_mais_rapida >= 20:
            print('3')

    except EOFError:
        break