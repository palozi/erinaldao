//12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
//número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
//que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não. (0.4 ponto)
//Entrada: 6 números inteiros.
//Saída: paridade do número e a classificação adicional.

#include <stdio.h>

int main() {

    int num_int, i;

    for(i = 1; i <= 6; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &num_int);

        if(num_int % 2 == 0){
            if(num_int == 10){
                printf("É um número PAR e é 10");
                printf("\n\n");
            } else if(num_int > 10){
                printf("É um número PAR e MAIOR QUE 10");
                printf("\n\n");
            } else if(num_int < 10){
                printf("É um número PAR, MAS MENOR QUE 10");
                printf("\n\n");
            }
        } else{
            if(num_int < 50){
                printf("É IMPAR E MENOR QUE 50");
                printf("\n\n");
            } else{
                printf("É IMPAR E NAO É MENOR QUE 50");
                printf("\n\n");
            }
        }
    }


    return 0;
}