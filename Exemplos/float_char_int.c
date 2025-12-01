 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
    char letra; //Variavel do tipo char contem caracteres
    int x; //cariavel para numero inteiro
    float salario; //variavel do tipo float (real) contem  casas  decimais

    //Atribuindo valores para as variaveis
    letra = 'a';
    x = 10;
    salario = 3972.50;

    //saida de dados na tela
    printf("letra = %c \n", letra);
    printf("x = %d \n", x);
    printf("salario = %.2f \n", salario);
    system("pause");  
    return 0;
 }