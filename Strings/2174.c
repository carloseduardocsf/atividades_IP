#include <stdio.h>
#include <string.h>

int main() {

    int N, i, pegou = 1, faltam;
    char pomekon[1001];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%s", pomekon[i]);
        if(strcmp(pomekon[i], pomekon[i-1]) != 0){
            pegou++;
        }
    }

    faltam = 151 - pegou;
    printf("%d", faltam);

    return 0;
}
