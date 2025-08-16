#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("Digite o valor A: \n");
    scanf("%d", &a);
    printf("Digite o valor B: \n");
    scanf("%d", &b);


    if(a == b) {
        c = a + b;
        printf("Valor de C: %d \n", c);
    } else {
        c = a * b;
        printf("Valor de C: %d \n", c);
    }

    system("pause");
    return 0;
}


