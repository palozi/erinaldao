/*
15. Escreva um programa que apresente um menu com as seguintes opções:
1. Gerar a tabuada de um número.
2. Sair.

O programa deve solicitar ao usuário o número desejado e exibir a tabuada (de 1 a
10). O menu deve continuar sendo exibido até que o usuário escolha a opção de
sair. (0.2 ponto)

Entrada: escolha da opção e um número.
Saída: tabuada do número.
*/


#include <stdio.h>

int main(){

    int opcao, num, i;

    do{
        printf("\n\n====== MENU ======\n\n");
        printf("Digite uma das opções apresentadas:\n");
        printf("1. Gerar tabuada de um número\n2. Sair\n\n");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("Informe um número: ");
            scanf("%d", &num);
            for(i = 1; i <= 10; i++){
                printf("%d * %d = %d\n", num, i, num*i);
            }
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