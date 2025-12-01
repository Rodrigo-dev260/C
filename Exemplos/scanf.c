#include<stdio.h>
int main(void)
{
    char conceito; //variavel do tipo char armazena um unico caracter na  memória
    float nota;
    int numero;

    printf("Informe o conceito do aluno: ");
    scanf("%c", &conceito);

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    printf("Informe o número de matricula do aluno: ");
    scanf("%d", &numero);
    
    printf("\nMatricula %d \n", numero);
    printf("Conceito: %c \n", conceito);
    printf("Nota: %.1f\n", nota);//formatando a saída da nota com uma casa decimal
    return 0;
}