#include <stdio.h>

main()
{
    char estado_civil;

    puts("Escreva o seu estado civil:"); /* Coloca automaticamente um \n ao contrário do printf */
    estado_civil = getchar(); /* Função especificamente dedicada à leitura de caracteres */

    if (estado_civil == 'S' || estado_civil == 's') {
        printf("Solteiro");

    } else {
        if (estado_civil == 'C' || estado_civil == 'c') {
            printf("Casado");

        } else {
            if (estado_civil == 'D' || estado_civil == 'd') {
                printf("Divorciado");

            } else {
                if (estado_civil == 'V' || estado_civil == 'v') {
                    printf("Viuvo");

                } else {
                    printf("Estado civil invalido");
                }
            }
        }
    }

    printf("\n");
}