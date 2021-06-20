#include <stdio.h>
#include <string.h>

int main(){

    int N, i, j, letras_iguais = 0;

    char frase[1004];

    scanf("%d%*c", &N);

    while(N--){
        fgets(frase, 1004, stdin);
        char alfabeto[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};

        for(j = 0; frase[j] != '\0'; j++){
            for(i = 0; i < 26; i++){
                if(frase[j] == alfabeto[i]){ // se a determinada letra da frase é igual a determinada letra do alfabeto
                    letras_iguais++;
                    alfabeto[i] = 0;
                }
            }
        }

        if(letras_iguais == 26){
            printf("frase completa\n");
        }else if(letras_iguais >= 13){
            printf("frase quase completa\n");
        }else{
            printf("frase mal elaborada\n");
        }

        letras_iguais = 0;

    }

    return 0;

}











/*int main(){

    int N, i, quant_letras;
    char frase[1004];


    scanf("%d", &N);


    while(N > 0){

        fgets(frase, 1000, stdin); // comando para o usuario inserir a frase

        for(i = 0; frase[i] != '\0'; i++){
            printf("%s", frase[i]);
        }


        quant_letras =  strlen(frase); // ler quantas letras tem na frase

        printf("A frase tem %s letras", quant_letras);

        if(quant_letras == 26){
            printf("frase completa");
        }else if(quant_letras >= 13 && quant_letras < 26){
            printf("frase quase completa");
        }else{
            printf("frase mal elaborada");
        }

        N--;
    }

    return 0;

}*/




/*int main(){

    int  i;
    char frase[1000];

    printf("Digite uma frase: ");
    fgets(frase, 1000, stdin);

    printf("%s", frase);


    return 0;

}*/




