//16. Escreva um programa que apresente um menu com as seguintes opções:
//1. Calcular o fatorial de um número.
//2. Sair.
//O programa deve solicitar ao usuário um número inteiro e calcular o seu //fatorial. O
//menu deve continuar sendo exibido até que o usuário escolha a opção de sair

#include <stdio.h>

int main () {
    int num, opcao, i, fat;

    do{
        printf("\n\n====== MENU ======\n\n");
        printf("Digite uma das opções abaixo\n");
        printf("1. Calcular o fatorial de um número\n");
        printf("2. Sair\n\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                printf("Informe um número inteiro: ");
                scanf("%d", &num);
                while(num < 0){
                    printf("Digite um número que não seja negativo: ");
                    scanf("%d", &num);
                }
                fat = 1;
                for(i = num; i > 1; i--){
                    fat = fat*i;
                }
                printf("Fatorial de %d é: %d", num, fat);
                break;

            case 2:
                printf("Você escolheu SAIR");
                break;
            
            default:
                printf("Digite uma opção válida!");
                break;
        }
    }while(opcao != 2);

    return 0;
}
