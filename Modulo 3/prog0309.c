#include <stdio.h>

main()
{
    float salario;
    char estado_civil;

    printf("Escreva o seu salario: ");
    scanf("%f", &salario);

    printf("Escreva o seu estado civil: ");
    scanf(" %c", &estado_civil); /* Espaço à frente do formato de leitura para antagonizar o buffer */

    if (estado_civil == 'S' || estado_civil == 's') {
        printf("Imposto: %.2f\n", salario*0.10);
    } else {
        if (estado_civil == 'C' || estado_civil == 'c'){
            printf("Imposto: %.2f\n", salario*0.09);

        } else {
            printf("Estado civil inválido\n");
        }
    }

    
}