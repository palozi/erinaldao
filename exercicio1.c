/*
1. Escreva um programa em C que solicite ao usuário o valor inicial de um
investimento, a taxa de juros anual (em porcentagem) e o número de anos que o
dinheiro será investido. O programa deve calcular o valor final do investimento ao
final de cada ano, aplicando os juros compostos, e mostrar uma tabela com o valor
acumulado ano a ano. (0.1 ponto)
Entradas: valor inicial, taxa de juros anual, número de anos.
Saída: tabela mostrando o ano e o valor do investimento ao final de cada ano
*/


// inv = investimento
// j_anul = Juros anual
// v_acum = valor acumulado
// i = contador do FOR

#include <stdio.h>

int main(){

    float inv, j_anual, v_acum;
    int i, anos;
    
    printf("Informe o valor inicial do investimento: ");
    scanf("%f", &inv);
    printf("Agora informe a taxa de juros anual em porcentagem: ");
    scanf("%f", &j_anual);
    printf("Quantos anos será investido? ");
    scanf("%d", &anos);

    v_acum = inv;
    for(i = 1; i <= anos; i++){
        v_acum = v_acum * (1 + (j_anual/100));
        printf("Ano %d: %.2f\n", i, v_acum);
    }


    return 0;
}