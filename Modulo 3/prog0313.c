#include <stdio.h>

main()
{
    char estado_civil;

    printf("Estado Civil: ");
    scanf("%c", &estado_civil); /* ou estado_civil = getchar(); */

    switch (estado_civil)
        {
            case 'c':
            case 'C': printf("Casado\n"); break;
            case 's':
            case 'S': printf("Solteiro\n"); break;
            case 'd':
            case 'D': printf("Divorciado\n"); break;
            case 'v':
            case 'V': printf("Viuvo\n"); break;

            default: printf("Estado Civil incorrecto\n");
        }
}