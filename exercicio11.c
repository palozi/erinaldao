/*
11. Escreva um programa que peça ao usuário para inserir as notas de 8 alunos e
classifique cada nota em conceitos: 
A (nota entre 9 e 10), 
B (nota entre 7 e 8.9),
C (nota entre 5 e 6.9), 
D (nota entre 3 e 4.9) ou F (nota abaixo de 3). (0.4 ponto)

Entrada: 8 notas.
Saída: conceito correspondente para cada nota.
*/

#include <stdio.h>

int main () {
    float nota;
    int i;

    for (i=1; i <= 8; i++) {
        printf ("Informe uma nota de 1 a 10: ");
        scanf ("%f", &nota);
        while(nota < 0 || nota > 10){
            printf("Informe uma nota válida: ");
            scanf("%f", &nota);
        } 
        
        if (nota > 9 && nota <= 10) {
            printf("Nota: A\n\n");
        }else if (nota >= 7 && nota <= 8.9) {
            printf("Nota: B\n\n");
        }else if (nota >= 5 && nota <= 6.9) {
            printf("Nota: C\n\n");
        }else if (nota >= 3 && nota <= 4.9) {
            printf("Nota: D\n\n");
        }else{
            printf("Nota: F\n\n");
        }
    }

        

    return 0;
}

