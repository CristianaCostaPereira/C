#include <stdio.h>

main()
{
    float ordenado;

    printf("Escreva o seu ordenado: ");
    scanf("%f", &ordenado);

    if (ordenado > 1000) {
        ordenado = ordenado * 1.05;
    } else {
        ordenado = ordenado * 1.07;
    }

    printf("Novo ordenado: %.2f\n", ordenado);
}