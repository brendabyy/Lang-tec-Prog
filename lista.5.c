//exercicio 4
#include <stdio.h>
#include <stdlib.h>


// bloco de codigo reutilizavel por todo o programa, que recebe dois valores inteiros para realizar o calculo
int calcula_maior (int a, int b){
	return ((a+b+(abs((a-b))))/2);
}

int main(int argc, char *argv[]) {	
	int vet[10];
	int i, maior;
	
	for(i=0; i<10; i++){
		scanf("%d", &vet[i]);
	}
	for (i=1, maior=vet[0]; i<10; i++){
		maior = calcula_maior(maior,vet[i]);
	}
	printf("%d eh o ma\ior", maior);

	return 0;
}

