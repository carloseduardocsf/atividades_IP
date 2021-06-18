#include <stdio.h>


int main(){
    int Pares, i, j;

    while( scanf("%d", &Pares) != EOF ){
        int tam[Pares], cont = 0;
        char lado[Pares];


        for(i = 0; i < Pares; i++){
            scanf("%d %c", &tam[i], &lado[i]);
        }


        for(i = 0; i < Pares; i++){
            for(j = i+1; j < Pares; j++){
                if(tam[i] != -1 && tam[j] != -1){
                    if(tam[i] == tam[j] && lado[i] != lado[j]){
                        tam[i] = tam[j] = -1;
                        cont++;
                    }
                }
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}
