//13. Escreva um programa que apresente um menu com as seguintes opções:
//1. Converter de Celsius para Fahrenheit.
//2. Converter de Fahrenheit para Celsius.
//3. Sair.
//O programa deve continuar exibindo o menu até que o usuário escolha a opção de
//sair

#include <stdio.h>

int main () {
    int resp;
    float c, f, temp;

    resp = 0;
    do{
        printf("====== MENU ======\n\n");
        printf("Digite o número de uma das opções abaixo:\n1. Converter de Celsius para Fahrenheit\n2. Converter de Fahrenheit para Celsius\n3. Sair\n\n");
        scanf("%d", &resp);

        switch(resp){
            case 1:
                printf("\n\nVocê escolheu CONVERTER de CELSIUS para FAHRENHEIT:\nDigite o número da temperatura que quer converter: \n");
                scanf("%f", &c);
                temp = c * 1.8 + 32;
                printf("A conversão de %.1f°C para Fahrenheit resulta em: %.1f°F\n\n", c, temp);
                break;
            case 2:
                printf("\n\nVocê escolheu CONVERTER de FAHRENHEIT para CELSIUS: \nDigite o número da temperatura que quer converter: \n");
                scanf("%f", &f);
                temp = (f - 32) / 1.8;
                printf("A conversão de %.1f°F para Celsius resulta em: %.1f°C\n\n", f, temp);
                break;
            case 3:
                printf("Você escolheu SAIR.");
                break;
            default:
                printf("Opção inválida! Tente de novo.\n\n");
                break;
        }
    }while(resp != 3);


    return 0;

}