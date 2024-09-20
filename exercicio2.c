//02. Um número perfeito é aquele que é igual à soma de seus divisores próprios (excluindo ele mesmo). 

//Escreva um programa que solicite ao usuário um número inteiro positivo e verifique se esse número é perfeito. 
//O programa deve utilizar um laço para somar os divisores e, no final, informar se o número é perfeito ou não. (0.1 ponto)

//Entradas: número inteiro positivo.
//Saída: informar se o número é perfeito ou não.

#include <stdio.h>

int main (void) {
    int num, i, divisor;

    printf("Escreva um número positivo inteiro: ");
    scanf("%d", &num);
    while(num < 1){
        printf("Digite um número POSITIVO INTEIRO: ");
        scanf("%d", &num);
    }


    divisor = 0;
    for(i = 1; i < num; i++){
        if(num % i == 0){
            divisor = divisor + i;
        } 
    }

    if(divisor == num){
        printf("Número perfeito.");
    } else{
        printf("Número imperfeito.");
    }

    //exemplos de números para testar: 6 e 28 (perfeitos) 


    return 0;
}