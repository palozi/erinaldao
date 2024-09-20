//10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
//Para cada idade, o programa deve classificar a pessoa em uma das categorias:
//criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
//anos ou mais).

//Entrada: 10 idades.
//Saída: a classificação etária para cada idade


#include <stdio.h>

int main () {
    int i, pessoas, idade;
    pessoas = 0;
    for (i = 1; i <= 10; i++) {
        printf ("Escreva uma idade: ");
        scanf ("%d", &idade);
        while(idade < 0 || idade > 180){
            printf("Digite uma idade válida: ");
            scanf("%d", &idade);
        }
        pessoas = pessoas + 1;

        if(idade >= 0  && idade <= 12) {
            printf("Classificação de crianças\n\n");
        }

        else if(idade >=13 && idade <=17){
            printf("Classificação de Adolescente\n\n");
        }

        else if(idade >=18 && idade <=64){
            printf("Classificação de Adulto\n\n");
        }

        else if(idade >=65){
            printf("Classificação de Idoso\n\n");
        }
    }

    



    return 0;
}