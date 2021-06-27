#include <stdio.h>

void ExibeMenu(){

    printf("----------Menu----------\n\n"
           "\t1 - Soma\n"
           "\t2 - Subtracao\n"
           "\t3 - Multiplicacao\n"
           "\t4 - Divisao\n"
           "\t5 - Sair\n");
}


int Soma(int a, int b){
    return a + b;
}

int Subtracao(int a, int b){
    return a - b;
}

int Multiplicacao(int a, int b){
    return a * b;
}

float Divisao(float a, float b){
    return a / b;
}




int main(){
    int escolha;
    int a, b, res;

    printf("Essa eh uma calculadora\n\n");

    while(1){
        ExibeMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        if(escolha == 5){
            break;
        }

        printf("Digite dois valores: ");
        scanf("%d%d", &a, &b);

        switch(escolha){
        case 1:
            res = Soma(a, b);
            printf("%d\n", res);
            break;
        case 2:
            res = Subtracao(a, b);
            printf("%d\n", res);
            break;
        case 3:
            res = Multiplicacao(a, b);
            printf("%d\n", res);
            break;
        case 4:
            res = Divisao(a, b);
            printf("%d\n", res);
            break;
        default:
            printf("Opcao invalida.");

        }

    }

    printf("Obrigado!");

    return 0;

}
