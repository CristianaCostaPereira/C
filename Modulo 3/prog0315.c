#include <stdio.h>

main()
{
    float salario, imposto = 0.0;
    char genero;

    printf("Introduza o salario: ");
    scanf("%f", &salario);

    printf("Qual o genero: ");
    scanf(" %c", &genero);

    switch (genero)
        {
            case 'm':
            case 'M': imposto = imposto + 0.05;
            case 'f':
            case 'F': imposto = imposto + 0.10;

        }

        printf("Imposto taxado: %.2f\n", salario*imposto);
}