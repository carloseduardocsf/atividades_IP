#include <stdio.h>
#include <math.h>

float Delta(float a, float b, float c){
    return (b*b) - 4*a*c;
}

float RaizX1(float a, float b, float delta){
    float x1;
    x1 = (- b + sqrt(delta))/ (2 * a);
    return x1;
}

float RaizX2(float a, float b, float delta){
    float x2;
    x2 = (- b - sqrt(delta))/ (2 * a);
    return x2;
}

int main(){
    float a, b, c, delta, x1, x2;

    printf("Digite um valor pra a: ");
    scanf("%f", &a);
    printf("Digite um valor pra b: ");
    scanf("%f", &b);
    printf("Digite um valor pra c: ");
    scanf("%f", &c);

    if(a == 0){
        return 1;
    }

    delta = Delta(a, b, c);
    printf("O delta dessa equacao de segundo grau eh %.1f\n", delta);
    if(delta < 0){
        return 2;
    }if(delta == 0){
        x1 = RaizX1(a, b, delta);
        x2 = RaizX2(a, b, delta);
        printf("A raiz dessa equacao de segundo grau eh %.1f\n", x1);
        return 0;

    }

    x1 = RaizX1(a, b, delta);
    x2 = RaizX2(a, b, delta);


    printf("As raizes dessa equacao de segundo grau sao %.1f e %.1f\n", x1, x2);



    return 0;

}


