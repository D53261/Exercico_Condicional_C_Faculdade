#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, valorNovo;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    if(n % 2 == 0) {
        valorNovo = n + 5;
        printf("%d \n", valorNovo);
    } else {
        valorNovo = n + 8;
        printf("%d \n", valorNovo);
    }

    system("pause");
    return 0;
}
