#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, soma;
    printf("Digite um numero: \n");
    scanf("%d", &a);
    printf("Digite um numero: \n");
    scanf("%d", &b);
    printf("Digite um numero: \n");
    scanf("%d", &c);

    soma = a + b;

    if(soma < c) {
        printf("A soma e menor que o valor C \n");
    }

    system("pause");
    return 0;
}
