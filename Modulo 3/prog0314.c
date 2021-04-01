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
            case 'f':
            case 'F': imposto = 0.10; break;

            case 'm':
            case 'M': imposto = 0.15; break;
        }

        printf("Imposto taxado: %.2f\n", salario*imposto);
}