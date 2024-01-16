def main():

    for i in range(int(input())):
        sheldon, raj = input().split()
        if sheldon == raj:
            print('Caso #{}: De novo!'.format(i+1))
        elif sheldon == 'pedra' and (raj == 'tesoura' or raj == 'lagarto'):
            print('Caso #{}: Bazinga!'.format(i+1))
        elif sheldon == 'papel' and (raj == 'pedra' or raj == 'Spock'):
            print('Caso #{}: Bazinga!'.format(i+1))
        elif sheldon == 'tesoura' and (raj == 'papel' or raj == 'lagarto'):
            print('Caso #{}: Bazinga!'.format(i+1))
        elif sheldon == 'lagarto'and (raj == 'papel' or raj == 'Spock'):
            print('Caso #{}: Bazinga!'.format(i+1))
        elif sheldon == 'Spock' and (raj == 'pedra' or raj == 'tesoura'):
            print('Caso #{}: Bazinga!'.format(i+1))
        else:
            print('Caso #{}: Raj trapaceou!'.format(i+1))
        

if __name__ == '__main__':
    main()
