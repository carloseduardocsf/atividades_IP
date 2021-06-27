#include <stdio.h>
#include <string.h>

int main(){

    char a[10000];
    char b[10000];
    char resultado[10000];
    int tam_a, tam_b, tam_resultado;
    int i;


    scanf("%s", &a);
    scanf("%s", &b);

    tam_a = strlen(a);
    for(i = 0; i < tam_a; i++){
        if(a[i] == 7){
            a[i] == 0;
        }
    }

    tam_b = strlen(b);
    for(i = 0; i < tam_b; i++){
        if(b[i] == 7){
            b[i] == 0;
        }
    }

    tam_resultado = strlen(resultado);
    for(i = 0; i < tam_resultado; i++){
        if(resultado[i] == 7){
            resultado[i] == 0;
        }
    }

    printf("%d\n", resultado);


    return 0;
}

