
#include <stdio.h>
#include <math.h>

int main() {
    double numero, a;
    int n;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    n = (int)floor(log10(numero));
    a = numero / pow(10, n);

    printf("%.2f x 10^%d\n", a, n);

    return 0;
}
