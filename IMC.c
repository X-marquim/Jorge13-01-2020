#include <stdio.h>
#include <string.h>

int main() {
    float peso, altura, imc;
    char class[128];


    printf("Peso: ");
    scanf("%f", &peso);

    printf("Altura: ");
    scanf("%f", &altura);
    altura = altura * 2;
    imc = peso / altura;

    if (imc < 18.5) {
        strcpy(class,"abaixo do peso");
    } else if (imc < 24.0) {
        strcpy(class, "saudavel");
    } else if (imc < 29.9) {
        strcpy(class,"peso em excesso");
    } else if (imc <34.9) {
        strcpy(class, "obesidade grau I");
    } else if (imc < 39.9) {
        strcpy(class, "obesidade grau II");
    } else {
        strcpy(class, "obesidade grau III");
    }
    
    printf("O seu IMC e de %.2f e e %s",imc, class);

    return 0;
}