//14. Escreva um programa que apresente um menu com as seguintes opções:
//1. Adição.
//2. Subtração.
//3. Multiplicação.
//4. Divisão.
//5. Sair.
//O programa deve solicitar dois números e realizar a operação escolhida. Deve
//continuar exibindo o menu até que o usuário escolha a opção de sair. (0.2 ponto)
//Entrada: escolha da operação e dois números.
//Saída: resultado da operação.

#include <stdio.h>

int main(){
    int opcao;
    float num1, num2;


    
    do{
        printf("\n\n====== CALCULADORA ======\n\n");
        printf("Escolha uma opção: \n");
        printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n\n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1: 
                printf("Você selecionou adição!\n");
                printf("Digite dois números: ");
                scanf("%f" "%f", &num1, &num2);
                printf("RESULTADO: %.2f\n\n", num1 + num2);
                break;
                //............
            case 2: 
                printf("Você selecionou Subtração!\n");
                printf("Digite dois números: ");
                scanf("%f" "%f", &num1, &num2);
                printf("RESULTADO: %.2f\n\n", num1 - num2);
                break;
                //............
            case 3:
                printf("Você selecionou Multiplicação!\n");
                printf("Digite dois números: ");
                scanf("%f" "%f", &num1, &num2);
                printf("RESULTADO: %.2f\n\n", num1 * num2);
                break;
                //............
            case 4:
                printf("Você selecionou Divisão!\n");
                printf("Digite dois números: ");
                scanf("%f" "%f", &num1, &num2);
                while(num2 == 0){
                    printf("Digite um número válido: ");
                    scanf("%f" "%f", &num1, &num2);
                }
                printf("RESULTADO: %.2f\n\n", num1 / num2);
                break;
            case 5:
                printf("Você escolheu SAIR");
                break;
            default:
                printf("Digite uma opção válida!");
                break;
            
        }

    }while(opcao != 5);
            
    return 0;

}
