/*
8. Escreva um programa que sorteie um número entre 1 e 100 e permita ao usuário
tentar adivinhar o número. O programa deve dar dicas se o número sorteado é
maior ou menor que o palpite do usuário. O usuário tem no máximo 7 tentativas
para acertar. No final, informe se o usuário acertou ou não. (0.3 ponto)
Entrada: palpites do usuário.
Saída: dicas (maior/menor) e resultado final (acertou ou esgotou tentativas).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//stdlib serve para incluir a função rand()
//time é para poder usar usar o srand(time(0)), que é uma função que está garantindo que o programa sempre gere um número diferente

int main(){

    int num, i, resp;

    srand(time(0));
    num = (rand() % 100) + 1;
    printf("%d\n", num); // apenas para consulta no ato de testar

    
    for(i = 1; i <= 7; i++){
        printf("Adivinhe o número que foi gerado: ");
        scanf("%d", &resp);

        if(resp < num){
            printf("O número é MAIOR!");
            printf("\n\n");
        }else if(resp > num){
            printf("O número é MENOR!");
            printf("\n\n");
        }else if(resp == num){
            printf("Parabéns! Você acertou. O número é: %d", num);
            break;
        }

        if(i == 7){
            printf("Você tentou 7 vezes e errou. O número era: %d", num);
        }
    }

    
    return 0;
}