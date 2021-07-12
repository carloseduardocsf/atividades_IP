#include <stdio.h>

int main() {

    int N, i, X, j;

    scanf("%d", &N);

    int arr[N];
    // inserindo valores
    for(i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }


    // metodo da bolha - ordena��o
    int sla = 0, aux, slaa = 1;

        for(i = 0; i < N; i++){
           for(j = 0; j < N-1; j++){
            if(arr[j] < arr[j+1]){
                aux = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = aux;
                sla++;
            }
        }
        if(sla > 0){
            slaa++;
            sla = 0;
        }

        }

    for(i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }

    printf("\n%d", slaa);


    return 0;
}
