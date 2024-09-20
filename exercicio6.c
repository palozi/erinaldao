/*
6. Escreva um programa que solicite dois números inteiros positivos ao usuário: um
valor inicial e um valor final. O programa deve então exibir todos os números primos
dentro desse intervalo. Se não houver números primos no intervalo, o programa
deve informar isso. (0.3 ponto)
Entrada: dois números inteiros positivos (inicial e final).
Saída: números primos no intervalo ou uma mensagem informando que não há
números primos.
*/

#include <stdio.h>
#include <math.h>
//inclui a biblioteca math.h para poder usar a função sqrt, que pega a raiz quadrada de um número.

int main(){
    int i, cont, num1, num2, tmp, qtd_primo, primo;
    

    printf("Informe um número inteiro positivo (valor inicial): ");
    scanf("%d", &num1);
    while(num1 <= 0){
        printf("Informe um número INTEIRO POSITIVO: ");
        scanf("%d", &num1);
    }
    printf("Informe outro número inteiro positivo (valor final): ");
    scanf("%d", &num2);
    while(num2 <= 0){
        printf("Informe um número INTEIRO POSITIVO: ");
        scanf("%d", &num2);
    }
    
    
    if(num1 > num2){
        tmp = num2;
        num2 = num1;
        num1 = tmp;
    }

    qtd_primo = 0;
    for(i = num1; i <= num2; i++){
        if(i < 2){
            continue; //ele vai pular a execução do resto do loop caso o i seja menor que 2.
                      //Qualquer número menor que 2 não é primo.
        }

        

        primo = 1;
        //iniciei essa variável com 1 (verdadeiro).

        //pra saber se um num é primo ou não, a gente precisa saber se ele pode ser dividido com alguém entre 2 e a raiz dele -
        // aí a importância da math.h lá em cima...
        for(cont = 2; cont <= sqrt(i); cont++){
            if(i % cont == 0){
                primo = 0;
                break;
            }
        }

            if(primo){
                printf("%d\n", i);
                qtd_primo = qtd_primo + 1;
            }
        
    }
    
    if(qtd_primo == 0){
        printf("Não há números primos neste intervalo!");
    }

   


    return 0;
}