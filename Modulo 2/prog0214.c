#include <stdio.h>

main()
{
    int num;

    printf("Introduza um inteiro entre 0-255: ");
    scanf("%d", &num);

    printf("Foi introduzido %d correspondente ao caracter '%c'\n", num, (char) num );

    printf("O caracter seguinte = '%c' tem ASCII no %d\n", num+1, (char) (num+1) );
}