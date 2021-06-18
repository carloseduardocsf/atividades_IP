#include <stdio.h>

int main() {

    int N, i, valor, dois = 0, tres = 0, quatro = 0, cinco = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &valor);
        if(valor % 2 == 0){
            dois += 1;
        }
        if(valor % 3 == 0){
            tres += 1;
        }
        if(valor % 4 == 0){
            quatro += 1;
        }
        if(valor % 5 == 0){
            cinco += 1;
        }
    }

    printf("%d Multiplo(s) de 2\n", dois);
    printf("%d Multiplo(s) de 3\n", tres);
    printf("%d Multiplo(s) de 4\n", quatro);
    printf("%d Multiplo(s) de 5\n", cinco);

    return 0;
}
