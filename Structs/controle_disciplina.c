#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 30

typedef struct {
    int matricula;
    char nome[41];
    float nota1, nota2, nota3, nota_recuperacao;
}dadosAlunos;


int main(){

    dadosAlunos alunos[MAX_ALUNOS];

    char nome_disciplina[51];
    int quantidade_alunos;
    float media, media_final;

    printf("Ola, seja bem-vindo ao programa controle de disciplina...\n\n");

    printf("Nome da disciplina: ");
    fgets(nome_disciplina, 51, stdin);
    nome_disciplina[strcspn(nome_disciplina, "\n")] = '\0';


    printf("Quantidade de alunos: ");
    scanf("%d", &quantidade_alunos);

    for(int i = 0; i < quantidade_alunos; i++){
        printf("Nome do aluno: ");
        scanf("%s", &alunos[i].nome);

        printf("Digite a matricula do aluno %d:", i+1);
        scanf("%d", &alunos[i].matricula);
    }

    for(int i = 0; i < quantidade_alunos; i++){
        printf("%s\n", alunos[i].nome);

        printf("Nota 1:");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2:");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3:");
        scanf("%f", &alunos[i].nota3);
    }

    // laço de repetição para saber se o aluno ta ou não de recuperação
    for(int i = 0; i < quantidade_alunos; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        media_final = ((media * 6) + (alunos[i].nota_recuperacao * 4)) / 10;

        if(media >= 4 && media < 7){
            printf("%s\n", alunos[i].nome);

            printf("Digite a nota de recuperacao de %s: ", alunos[i].nome);
            scanf("%f", &alunos[i].nota_recuperacao);

        }
    }


    printf("\nDisciplina: %s\n", nome_disciplina);
    printf("-----------------------------------------------------------------\n");
    printf("Matricula  Nome     Nota1  Nota2  Nota3  Rec  Media  Situacao\n");
    printf("-----------------------------------------------------------------\n");
    for(int i = 0; i < quantidade_alunos; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        media_final = ((media * 6) + (alunos[i].nota_recuperacao * 4)) / 10;
        if(media >= 4 && media < 7){
            if(media_final >= 5){
               printf("%5d %9s %8.1f %6.1f %6.1f %5.1f %5.1f    Aprovado\n", alunos[i].matricula, alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].nota3, alunos[i].nota_recuperacao, media_final);
            }else if(media_final < 5){
               printf("%5d %9s %8.1f %6.1f %6.1f %5.1f %5.1f    Reprovado\n", alunos[i].matricula, alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].nota3, alunos[i].nota_recuperacao, media_final);
            }
        }else{
            if(media >= 7){
                printf("%5d %9s %8.1f %6.1f %6.1f    - %6.1f    Aprovado\n", alunos[i].matricula, alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].nota3, media);
            }else if(media < 4){
                printf("%5d %9s %8.1f %6.1f %6.1f    - %6.1f    Reprovado\n", alunos[i].matricula, alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].nota3, media);
            }

        }

        }


    return 0;

}
