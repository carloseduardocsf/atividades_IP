#include <stdio.h>

/* implemente aqui sua funcao */
int Soma(int x, int y){
    int i, soma = 0;

    // laço de repetição para saber a soma dos elementos do intervalo fechado
    for(i = x; i <= y; i++){
        soma += x;
        x += 1;
    }
    return soma;
}

int main(void){
    int a, b, soma;
    int menor, maior;


    scanf("%d %d", &a, &b);

    // condicional para saber qual o maior e o menor valores entre "a" e "b", ou se eles são iguais
    if(a > b){
        menor = b;
        maior = a;
    }else if(a <= b){
        menor = a;
        maior = b;
    }

    /* faca aqui a chamada a sua funcao */
    soma = Soma(menor, maior);
    printf("%d\n", soma);

    return 0;
}
