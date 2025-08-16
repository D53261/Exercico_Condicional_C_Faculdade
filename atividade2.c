#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    // CONDICIONAL
    if(n % 2 == 0) {
        // COMANDO PRO CASO DE SER VERDADEIRO
        printf("Par!\n");
    } else {
        // COMANDO PRO CASO DE SER FALSO
        printf("Impar\n");
    }

    system("pause");
    return 0;
}
