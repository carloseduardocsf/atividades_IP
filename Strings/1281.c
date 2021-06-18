#include <stdio.h>
#include <string.h>

typedef struct{ // criando uma struct com os parametros "preco" e "nome[51]"
    double preco;
    char nome[51];
}Fruta;


Fruta Frutas[1000]; // criando um array de frutas

int main(){

    int N, M, P;
    int i, j, k;
    double total; // variavel para armazenar o valor total que vai ser gasto a cada ida a feira

    int qtd; // variavel para armazenar a quantidade de cada fruta
    char produto[51]; // criando uma string para armazenar os nomes das frutas

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        total = 0; // zerando o total a cada caso de teste
        scanf("%d", &M);
        for(j = 0; j < M; j++){
            scanf("%s %lf", Frutas[j].nome, &Frutas[j].preco);
        }
        scanf("%d", &P);
        for(j = 0; j < P; j++){
            scanf("%s %d", produto, &qtd);
            for (k=0; k<M; k++){ // for para rodar todas as frutas e comparar se elas sao iguais ou nao
                if (strcmp(produto, Frutas[k].nome) == 0){
                    total += Frutas[k].preco*qtd;
                }
            }
        }
        printf("R$ %.2lf\n", total);
    }

    return 0;
}

/*#include <stdio.h>
#include <string.h>

int main(){

    int N, M, P;
    int i, j;
    int quant;
    double preco;
    char produtos[51];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &M);
        for(j = 0; j < M; j++){
            scanf("%s %lf", produtos, &preco);
        }
        scanf("%d", &P);
        for(j = 0; j < P; j++){
            scanf("%s %d", produtos, &quant);
        }



    }


    return 0;
}*/
