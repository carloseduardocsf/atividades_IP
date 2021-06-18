#include <stdio.h>

int main() {

    unsigned long long int P;

    scanf("%llu", &P);
    if(P == -1){
        return 0;
    }
    if(P > 2){
        printf("%llu\n", P - 1);
    }else{
        printf("0\n");
    }


    while(P != -1){
        scanf("%llu", &P);
        if(P == -1){
        break;
        }
        if(P > 2){
        printf("%llu\n", P - 1);
        }else{
        printf("0\n");
        }
    }

    return 0;
}


/*#include <stdio.h>

int main()
{
    unsigned long long int P;
    while(scanf("%llu", &P))
    {
        if(P == -1) break;
        if(P == 0) printf("0\n");
        else printf("%llu\n", P - 1);
    }
    return 0;
}*/
