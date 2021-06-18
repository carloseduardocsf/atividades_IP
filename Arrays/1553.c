#include <stdio.h>

int main() {

    int N, K, i, P;

    scanf("%d", &N);
    scanf("%d", &K);



    while(N != 0 && K != 0){
        if(N == 0 && K == 0){
            return 0;
        }

        for(i = 0; i < N; i++){
            scanf("%d", &P);
        }
        scanf("%d", &N);
        scanf("%d", &K);
    }


    return 0;
}
