#include <stdio.h>
#include <string.h>

int main(){
    int N, i, j, leds = 0;
    char V[102];

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        leds = 0;
        //scanf("%s", &V);
        fgets(V, 102, stdin);
        for(j = 0; V[j] != '\0'; j++){
            if (V[j] == '1'){
                leds += 2;
            }else if (V[j] == '2'){
                leds += 5;
            }else if (V[j] == '3'){
                leds += 5;
            }else if (V[j] == '4'){
                leds += 4;
            }else if (V[j] == '5'){
                leds += 5;
            }else if (V[j] == '6'){
                leds += 6;
            }else if (V[j] == '7'){
                leds += 3;
            }else if (V[j] == '8'){
                leds += 7;
            }else if (V[j] == '9'){
                leds += 6;
            }else if (V[j] == '0'){
                leds += 6;
            }
        }

        printf("%d leds\n", leds);

    }

    return 0;

}


