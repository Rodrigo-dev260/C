#include <stdio.h>

int main()
{
    float populacao1, populacao2;

    int vitoria;

    printf("Digite a polulação: \n");
    scanf("%f", &populacao1);

    printf("Digite a população: \n");
    scanf("%f", &populacao2);

    vitoria = (populacao1 > populacao2);

    if (vitoria) {
        printf("População: Carta 1 venceu %d\n", vitoria);
    } else printf("População: Carta 2 venceu %d\n", vitoria);

    //printf("População: %d\n", vitoria);

    return 0;
}