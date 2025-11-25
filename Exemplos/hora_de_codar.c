#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];
     
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua matricula:\n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s \nMatricula: %d \n", nome, matricula);
    printf("Idade: %d anos \nAltura: %.2f\n", idade, altura);

    return 0;
}

/* A seguir, você tem uma lista dos principais especificadores utilizados:

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.*/