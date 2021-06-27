#include <stdio.h>
#include <math.h>

//FUNÇÃO PARA SABER SE O TRIÂNGULO É RETÂNGULO OU NÃO
int EhTrianguloRetangulo(int a, int b, int c){
    // SE FOR RETÂNGULO RETORNA 1
    if((a*a) + (b*b) == (c*c)){
        return 1;
    // SE NÃO FOR RETÂNGULO RETORNA 0
    }else{
        return 0;
    }
}

// FUNÇÃO PARA SABER SE TEM ALGUM VALOR INVÁLIDO
int FormaTrianguloRetangulo(int a, int b, int c){
    int novoValor;
    // SE O VALOR INVÁLIDO FOR A
    if(a <= 0 && b > 0 && c > 0){
        novoValor = sqrt((c*c) - (b*b));
    // SE O VALOR INVÁLIDO FOR B
    }else if(a > 0 && b <= 0 && c > 0){
        novoValor = sqrt((c*c) - (a*a));
    // SE O VALOR INVÁLIUDO FOR C
    }else if(a > 0 && b > 0 && c <= 0){
        novoValor = sqrt((a*a) + (b*b));
    // SE TIVER MAIS DE UM VALOR INVÁLIDO
    }else{
        return -1;
    }
    return novoValor;
}


int main(){

    int a, b, c;
    int triangulo, novoLado;

    printf("Digite um valor para o cateto a: ");
    scanf("%d", &a);
    printf("Digite um valor para o cateto b: ");
    scanf("%d", &b);
    printf("Digite um valor para a hipotenusa c: ");
    scanf("%d", &c);

    // SE NÃO TIVER VALORES INVÁLIDOS
    if(a > 0 && b > 0 && c > 0){
        triangulo = EhTrianguloRetangulo(a, b, c);
        // SE OS VALORES FORMAREM UM TRIÂNGULO RETÂNGULO
        if(triangulo == 1){
            printf("O triangulo eh retangulo.\n");
        // SE OS VALORES NÃO FORMAREM UM TRIÂNGULO RETÂNGULO
        }else if(triangulo == 0){
            printf("O triangulo nao eh retangulo.\n");
        }

    //SE TIVER VALORES INVÁLIDOS
    }else{
        novoLado = FormaTrianguloRetangulo(a, b, c);
        // SE TIVER MAIS DE UM VALOR INVÁLIDO
        if(novoLado == -1){
            printf("Entrada eh invalida.\n");
        // SE TIVER APENAS UM VALOR INVÁLIDO
        }else{
            printf("Novo valor calculado %d.\n", novoLado);
        }
    }


    return 0;

}
