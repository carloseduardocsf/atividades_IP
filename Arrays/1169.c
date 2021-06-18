#include <stdio.h>
#include <math.h>

int main() {

    int N, X, i;
    unsigned long long int quantGraos, kg;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &X);
        quantGraos = (1 - pow(2, X)) / (-1);
        kg = quantGraos / 12000;
        printf("%lld kg\n", kg);
    }

    return 0;
}
