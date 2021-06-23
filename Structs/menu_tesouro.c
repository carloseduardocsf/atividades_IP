/*
    Laboratorio de Introducao a Programacao para Engenharia da Computacao.
    Atividade do dia 21 de junho de 2021.

    Descricao:

    Complete esse codigo fonte para criar um programa dirigido por menus que mantem um
    cadastro de um tesouro e sua localizacao.

    O tesouro sera representado por:
      - Uma descricao (dinheiros, chocolate, feriado, ponto extra)
      - Um valor em reais
      - Uma coordenada X
      - Uma coordenada Y

    As funcionalidades do programa sao:
      - Cadastro do tesouro
      - Impressao das informacoes do tesouro cadastrado
      - Informar a distancia do tesouro a partir de um determinado ponto
        inserido pelo usuario

*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa ...\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

void CadastroRegistro(tRegistro *reg) {
    //ler do usuario e preencher, use prompts e scanf e preencha a estrutura no parametro
    printf("Digite o tesouro: ");
    scanf("%s", reg->descricao);
    printf("Digite um valor em reais: ");
    scanf("%f", &reg->valor);
    printf("Digite uma coordenada X: ");
    scanf("%d", &reg->x);
    printf("Digite uma coordenada Y: ");
    scanf("%d", &reg->y);

}

void ImprimeRegistro(const tRegistro *reg) {
    //mostrar as informacoes do registro do parametro de forma organizada
    printf("Tesouro: ");
    printf("%s\n", reg->descricao);
    printf("Valor em reais: ");
    printf("%.1f\n", reg->valor);
    printf("Coordenada X: ");
    printf("%d\n", reg->x);
    printf("Coordenada Y: ");
    printf("%d\n", reg->y);


}

float Distancia(tRegistro * reg, int x, int y){
	//funcao q retorna a distancia da coordenada dos parametros ate a coordenada do registro
    int distx, disty;
    float dist;
    distx = x - reg->x;
    disty = y - reg->y;
    dist = sqrt(distx*distx + disty*disty);

    return dist;

}

int main(void)
{
    tRegistro reg; //guarda o registro
    int opcao, x, y;
    float dist;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:
                CadastroRegistro(&reg);
                break;
            case 2:
                ImprimeRegistro(&reg);
                break;
            case 3:
                printf("Digite a coordenada X: ");
                scanf("%d", &x);
                printf("Digite a coordenada Y: ");
                scanf("%d", &y);
                dist = Distancia(&reg, x, y);
                printf("%.1f", dist);
                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus");
    return 0;
}
