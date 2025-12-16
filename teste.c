#include <stdio.h>

int main()
{
    int populacao1 = 20, populacao2 = 10;

    int vitoria;

    vitoria = (populacao1 > populacao2);

    if (vitoria) {
        printf("População: Carta 1 foi vencedora %d\n", vitoria);
    } else printf("População: Carta 2 foi vencedora %d\n", vitoria);

    //printf("População: %d\n", vitoria);

    return 0;
}