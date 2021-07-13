#include <stdio.h>
#include <math.h>

//FUN��O PARA SABER SE O TRI�NGULO � RET�NGULO OU N�O
int EhTrianguloRetangulo(int a, int b, int c){
    // SE FOR RET�NGULO RETORNA 1
    if((a*a) + (b*b) == (c*c)){
        return 1;
    // SE N�O FOR RET�NGULO RETORNA 0
    }else{
        return 0;
    }
}

// FUN��O PARA SABER SE TEM ALGUM VALOR INV�LIDO
int FormaTrianguloRetangulo(int a, int b, int c){
    int novoValor;
    // SE O VALOR INV�LIDO FOR A
    if(a <= 0 && b > 0 && c > 0){
        novoValor = sqrt((c*c) - (b*b));
    // SE O VALOR INV�LIDO FOR B
    }else if(a > 0 && b <= 0 && c > 0){
        novoValor = sqrt((c*c) - (a*a));
    // SE O VALOR INV�LIUDO FOR C
    }else if(a > 0 && b > 0 && c <= 0){
        novoValor = sqrt((a*a) + (b*b));
    // SE TIVER MAIS DE UM VALOR INV�LIDO
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

    // SE N�O TIVER VALORES INV�LIDOS
    if(a > 0 && b > 0 && c > 0){
        triangulo = EhTrianguloRetangulo(a, b, c);
        // SE OS VALORES FORMAREM UM TRI�NGULO RET�NGULO
        if(triangulo == 1){
            printf("O triangulo eh retangulo.\n");
        // SE OS VALORES N�O FORMAREM UM TRI�NGULO RET�NGULO
        }else if(triangulo == 0){
            printf("O triangulo nao eh retangulo.\n");
        }

    //SE TIVER VALORES INV�LIDOS
    }else{
        novoLado = FormaTrianguloRetangulo(a, b, c);
        // SE TIVER MAIS DE UM VALOR INV�LIDO
        if(novoLado == -1){
            printf("Entrada eh invalida.\n");
        // SE TIVER APENAS UM VALOR INV�LIDO
        }else{
            printf("Novo valor calculado %d.\n", novoLado);
        }
    }


    return 0;

}
