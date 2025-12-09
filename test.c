#include<stdio.h>

int main()
{
    float preco1, preco2;
    
    printf("Digite um numero: \n");
    scanf("%f", &preco1);

    printf("Digite outro numero: \n");
    scanf("%f", &preco2);

    if (preco1 > preco2){
        printf("O primeiro valor e maior.");
    }
    else {
        printf("O segundo valor e maior.");
    }

    return 0;
}