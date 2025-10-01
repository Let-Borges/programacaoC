#include <stdio.h>

int main() {

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o 1º numero: \n");
    scanf("%d", &numero1);
    printf("Entre com o 2º numero: \n");
    scanf("%d", &numero2);

    //operaçao soma
    soma = numero1 + numero2;

    //operaçao subtraçao
    subtracao = numero1 - numero2;

    //operaçao multiplicaçao
    multiplicacao = numero1 * numero2;

    //operaçao divisao
    divisao = numero1 / numero2;

    printf("A soma é: %d \n", soma);
    printf("A subtração é: %d \n", subtracao);
    printf("A multiplicação é: %d \n", multiplicacao);
    printf("A divisão é: %d \n", divisao);

}

