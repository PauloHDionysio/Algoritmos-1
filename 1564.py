frase = int(input())
while True:
    try:
        if frase == 0:
            print('vai ter copa!')
        else:
            print('vai ter duas!')
        frase = int(input())
    except EOFError:
        break