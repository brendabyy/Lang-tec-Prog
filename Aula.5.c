#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//exercicio 10
int main(int argc, char *argv[]) {
	
	int a, b, c, maior_temp, maior;
	
	printf("INSIRA OS VALORES A SEREM COMPARADOS: ");
	scanf( "%d %d %d", &a, &b, &c);
	maior_temp = ((a+b)+abs(a-b))/2;
		
	maior = ((maior_temp+c)+ abs(maior_temp-c))/2;
	
	printf("O MAIOR ENTRE |%d|%d|%d| = %d", a, b, c, maior);	
	
	return 0;
}
