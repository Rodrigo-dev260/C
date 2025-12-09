#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoque_minimo = 1000;

    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade:\n");
    scanf("%f", &umidade);

    printf("Entre com o estoque:\n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("Temperatura esta alta\n");
    } else {
        printf("A temperatura esta dentro dos parametros.\n");
    }

    if (umidade > 50) {
        printf("Umidade elevada.\n");
    } else {
        printf("Umidade esta dentro dos parametros.\n");
    }

    if (estoque < estoque_minimo) {
        printf("Estoque baixo.\n");
    } else {
        printf("Estoque dentro dos parametros.\n");
    }

    return 0;
}