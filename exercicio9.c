//9. Escreva um programa que peça ao usuário para inserir as notas de 5 alunos.
//Para cada aluno, o programa deve calcular a média de duas provas. Se a média for
//maior ou igual a 7.0, o aluno é aprovado. Se a média estiver entre 5.0 e 6.9, o aluno
//vai para a recuperação, e se for menor que 5.0, o aluno é reprovado. 

//Entrada: 10 notas (2 para cada aluno).
//Saída: média de cada aluno e status (aprovado, recuperação ou reprovado).



#include <stdio.h>

int main () {
    float nota1[5], nota2[5], media;
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1[i]);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2[i]);
    }

    for(i = 0; i < 5; i++){
      media = (nota1[i] + nota2[i]) / 2;

        if(media >= 7){
            printf("Média do aluno %d: %.2f - APROVADO!\n", i+1, media);
        } else if(media >= 5 && media <= 6.9){
            printf("Média do aluno %d: %.2f - RECUPERAÇÃO!\n", i+1, media);
        } else if(media < 5){
            printf("Média do aluno %d: %.2f - REPROVADO!\n", i+1, media);
        }   
        
    }

    return 0;

}