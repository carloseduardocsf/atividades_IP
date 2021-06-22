#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char pass[40];

    while(scanf("%[^\n]%*c", pass) != EOF){
        int valida = 1, i, lower = 0, upper = 0, esp = 0;
        int len = strlen(pass);

        if(len < 6 || len > 32){
            valida = 0;
        }else{
            for(i = 0; pass[i] != '\0'; i++){
                if(islower(pass[i]) != 0 && isalnum(pass[i])){
                    lower++;
                    break;
                }
            }
            for(i = 0; pass[i] != '\0'; i++){
                if(isupper(pass[i]) != 0 && isalnum(pass[i])){
                    upper++;
                    break;
                }
            }
            for(i = 0; pass[i] != '\0'; i++){
                if(!isalnum(pass[i])){
                    esp++;
                    valida = 0;
                    break;
                }
            }
        }

        if(valida){
            printf("Senha valida.\n");
        }else puts("Senha invalida.");
    }

    return 0;
}
