#include <stdio.h>

main()
{
    float raio, perimetro;
    double Pi = 3.1415927, area;

    printf("Introduza o raio da circunferência: ");
    scanf("%f", &raio);

    area = Pi * raio * raio;
    perimetro = 2 * Pi * raio;

    printf("Area = %f\n Perimetro = %f\n", area, perimetro);
}