#include <stdio.h>

main()
{
    float salario;

    printf("Escreva o seu salario: ");
    scanf("%f", &salario);

    if (salario <= 0) {
        printf("Erro, valor invalido\n");

    } else {
        if (salario > 1000) {
            printf("Imposto =  %.2f\n", salario*0.10);

        } else {
            printf("Imposto =  %.2f\n", salario*0.05);
        }
    }
}