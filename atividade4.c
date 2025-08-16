#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, valor;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    if(n >= 0) {
        valor = n*2;
        printf("Dobro do numero: %d \n", valor);
    } else {
        valor = n*3;
        printf("Triplo do numero: %d \n", valor);
    }

    system("pause");
    return 0;
}

