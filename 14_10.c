#include <stdio.h>
#include <stdlib.h>

/*faça um programa que leia 10 numeros, inteiros positivos, ignorando os negativos e calcule a soma e a média,e mostre na tela 
somente com 3 variaveis (i, n, s). Não pode ser vetor.Não pode usar Laco FOR.
*/
int main(int argc, char *argv[]) {
	
	int i, n, s;

    i = 0;
    s = 0;

    while (i < 10) {
        printf(" DIGITE UM NUMERO");
		scanf("%d", &n);

        if (n > 0) {
            s +=n;
            i++;
        }else{
        	printf("numero ignorado, digite um numero positivo!");
		}
    }

    printf("Soma: %d\n", s);
    printf("Media: %.2f\n", s / 10.0);

	return 0;
}
