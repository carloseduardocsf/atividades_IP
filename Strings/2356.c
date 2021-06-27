#include <stdio.h>
#include <string.h>

int main(){

    char D[101];
    char S[101];


    while(1){
        fgets(D, 101, stdin);
        fgets(S, 101, stdin);

        char str[5] = {'a', 'c', 'g', 't', '\0'};

        for(i = 0; D[i] != '\0'; i++){ // sequencia que o usuario vai colocar
            for(j = 0; j < 4; j++){ // sequencia base
                if(D[i] == str[j]){
                    letras_iguais++;
                    alfabeto[i] = 0;
                }
            }
        }


    }

    return 0;

}
