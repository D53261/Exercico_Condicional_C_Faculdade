#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc;
    printf("Digite seu peso: \n");
    scanf("%f", &peso);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5) {
        printf("Abaixo do peso \n");
    } else if(imc >= 18.5 && imc <= 25) {
        printf("Peso normal \n");
    } else if(imc >= 25 && imc <= 30) {
        printf("Acima do peso \n");
    } else if(imc > 30) {
        printf("Obesidade \n");
    }

    system("pause");
    return 0;
}

