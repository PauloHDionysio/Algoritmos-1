#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 15

int main()
{
    int M[MAX][MAX], ordem, i, j, somal, somac, aux = 0, somap = 0, somas, somalc = 0, somaps = 0;
    printf("Escreva a ordem da matriz: ");
    scanf("%d", &ordem);
    printf("\nAgora escreva os valores dentro da matriz\n");
    for (i = 0; i < ordem; i++)
    {
        for (j = 0; j < ordem; j++)
        {
            printf("Local do valor na matriz[%d][%d]:  ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for (i = 0; i < ordem; i++)
    {
        somal = 0;
        for (j = 0; j < ordem; j++)
        {
            somal += M[i][j];
        }
    }
    for (j = 0; j < ordem; j++)
    {
        somac = 0;
        for (i = 0; i < ordem; i++)
        {
            somac += M[j][i];
        }
    }
    for (i = 0; i < ordem; i++)
    {
        somap += M[i][i];
    }
    for (j = ordem - 1; j >= 0; j--)
    {
        somas = 0;
        for (i = 0; i < ordem; i++)
        {
            somas += M[j][i];
        }
    }
    if (somal == somac)
        somalc++;
    else
        somalc = 0;
    if (somap == somas)
        somaps++;
    else
        somaps = 0;
    if (somalc == somaps)
        printf("\nQuadrado Magico!");
    else
        printf("\nNao eh Quadrado Magico");
    return 0;
}
