#include <stdio.h>

main()
{
    float salario;

    printf("Valor salarial: ");
    scanf("%f", &salario);

    if (salario < 100000);
        salario = salario +1000;

    printf("Valor Salarial final: %.2f\n", salario); /* Para evitar que %f nos paresente muitas casa decimais, indicamos que a seguir ao ponto vêm apenas dois dígitos */
}