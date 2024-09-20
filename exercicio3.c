/*
3. Escreva um programa em C que solicite ao usuário as notas de 5 alunos e suas
respectivas pesos, calcule a média ponderada de cada aluno e ao final exiba a
média final da turma. (0.1 ponto)
*/

#include <stdio.h>

int main(){

    int i;
    float nota, peso, soma_nota, soma_peso, media_pond;
    
    soma_nota = 0;
    soma_peso = 0;
    for(i = 1; i<=5; i++){
        printf("Informe a nota do aluno %d: ", i);
        scanf("%f", &nota);
        printf("Digite o peso dessa nota: ");
        scanf("%f", &peso);
        printf("\n");

        soma_nota = soma_nota + nota * peso;
        soma_peso = soma_peso + peso;
    }

    media_pond = soma_nota/soma_peso;


    printf("Média ponderada da turma: %.2f", media_pond);

    
    return 0;
}





