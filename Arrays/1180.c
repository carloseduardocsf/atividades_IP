#include <stdio.h>
int main()
{
   int i, N, posicao, menor;
    scanf("%d", &N);
    int ar[N];
    for(i=0; i<N; i++){
        scanf("%d", &ar[i]);
    }
    menor=ar[0];
    for(i=1; i<N; i++){
        if(menor>ar[i]){
            menor=ar[i];
            posicao=i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    return 0;
}
