#include <stdio.h>

main()
{
    float salario, taxa;

    printf("Escreva o salario: ");
    scanf("%f", &salario);

    if (salario < 1000) {
        taxa = 0.05;

    } else {
        if (salario < 5000) {
            taxa = 0.11;

        } else {
            taxa = 0.35;
        }
    }

    printf("Salario Bruto: %.2f\n", salario);
    printf("Imposto: %.2f\n", salario*taxa);
    printf("Salario Liquido: %.2f\n", salario*(1.0-taxa) );
}