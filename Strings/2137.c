#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compara(const void *p1, const void *p2) {
    return strcmp(p1, p2);
}

int main() {
    int N, i;
    char codigo[1000][5];

    while (scanf("%d ", &N) != EOF) {
        for (i = 0; i < N; i++){
            scanf("%s", codigo[i]);
        }

        qsort(codigo, N, 5, compara);

        for (i = 0; i < N; i++){
            printf("%s\n", codigo[i]);
        }

        memset(codigo, 0, sizeof(codigo));

    }


    return 0;

}
