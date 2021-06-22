#include <stdio.h>
#include <string.h>

int main(){
    unsigned T, i;

    scanf("%u%*c", &T);

     for(i = 0; i < T; i++){
        char strA[10];
        char strB[10];

        scanf("%s", &strA);
        scanf("%s", &strB);

        if (strcmp(strA, strB) == 0){
            printf("Caso #%u: De novo!\n", i+1);
        }else if (strcmp(strA, "Spock") == 0 && strcmp(strB, "pedra") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(strA, "lagarto") == 0 && strcmp(strB, "Spock") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(strA, "tesoura") == 0 && strcmp(strB, "lagarto") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(strA, "papel") == 0 && strcmp(strB, "Spock") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(strA, "tesoura") == 0 && strcmp(strB, "papel") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(strA, "papel") == 0 && strcmp(strB, "pedra") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(strA, "lagarto") == 0 && strcmp(strB, "papel") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(strA, "pedra") == 0 && strcmp(strB, "lagarto") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(strA, "Spock") == 0 && strcmp(strB, "tesoura") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else if (strcmp(strA, "pedra") == 0 && strcmp(strB, "tesoura") == 0){
            printf("Caso #%u: Bazinga!\n", i+1);
        }else printf("Caso #%d: Raj trapaceou!\n", i+1);

    }

    return 0;
}
