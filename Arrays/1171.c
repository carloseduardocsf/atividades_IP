#include <stdio.h>


int main (void){

	int valor[2000];
	int n, x, maior=0;
	scanf("%d", &n);
	for(x=0;x<2000;x++)
		valor[x] = 0;
	while(n>=1){
		scanf("%d", &x);
		if(x>maior)
			maior = x;
		valor[x-1]++;
		n--;
	}
	for(n=0;n<=maior;n++)
		if(valor[n] >= 1)
			printf("%d aparece %d vez(es)\n", n+1,valor[n]);
	return 0;
}
