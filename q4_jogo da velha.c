#include <stdio.h>

int main() {
    char veia[3][3], veio;
    int i;

    // recebendo os valore em 3 linhas
    for(i = 0; i < 3; i++){
            scanf("%c%c%c%*c", &veia[i][0], &veia[i][1], &veia[i][2]);
    }

    // tipos de caso e suas respectivas saídas - 8 casos de ganhar (2 casos pelas diagonais, 3 casos pelas linhas e 3 casos pelas colunas) fora os casos que da velha
    if(( veia[0][0] == veia[1][1] && veia[0][0] == veia[2][2]) || (veia[0][2] == veia[1][1] && veia[1][1] == veia[2][0])){ // diagonais
        veio = veia[1][1];
    }else if( ( veia[0][0] == veia[0][1] && veia[0][0] == veia[0][2] ) ){ //1 linha
        veio = veia[0][0];
    }else if( ( veia[1][0] == veia[1][1] && veia[1][0] == veia[1][2] ) ){ // 2 linha
        veio = veia[1][0];
    }else if( ( veia[2][0] == veia[2][1] && veia[2][0] == veia[2][2] ) ){ // 3 linha
        veio = veia[2][0];
    }else if( ( veia[0][0] == veia[1][0] && veia[0][0] == veia[2][0] ) ){ // 1 coluna
        veio = veia[0][0];
    }else if( ( veia[0][1] == veia[1][1] && veia[0][1] == veia[2][1] ) ){ // 2 coluna
        veio = veia[0][1];
    }else if( ( veia[0][2] == veia[1][2] && veia[0][2] == veia[2][2] ) ){ // 3 coluna
       veio = veia[0][2];
    }else{
        printf("Velha\n");
        return 0;
    }

    // exibindo a saída dos casos
    printf("%c\n", veio);

    return 0;
}
