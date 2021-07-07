#include <stdio.h>

/* implemente aqui sua funcao */

// função para saber o menor valor do array
int Menor(int arr[], int quant, int menor){
    int i;
    //encontra o valor mínimo
    menor = arr[0];
    for(i = 1; i < quant; i++){
        if(arr[i] < menor){
            menor = arr[i];
        }
    }
    return menor;

}

// função para saber o maior valor do array
int Maior(int arr[], int quant, int maior){
    int i;
    // encontra o valor maximo
    maior = arr[0];
    for(i = 1; i < quant; i++){
        if(arr[i] > maior){
            maior = arr[i];
        }
    }
    return maior;

}


int main(void){
    int ar[100];
    int n, i, min, max;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    /* faca aqui a chamada a sua funcao*/
    min = Menor(ar, n, min);
    max = Maior(ar, n, max);
    printf("%d %d\n", min, max);
    return 0;
}
