#include <stdio.h>

main()
{
    float a;

    printf("Escreva um No real: ");
    scanf("%f", &a);

    printf("Parte inteira: %d\n", (int) a);
    printf("Parte fraccionaria: %f\n", a - ((int) a) );
}