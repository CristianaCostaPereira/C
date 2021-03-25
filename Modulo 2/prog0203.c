#include <stdio.h>

main()
{
    int n1, n2;

    printf("Introduza dois numeros: ");
    scanf("%d%d", &n1, &n2); /* %d is my reading format, and because I want to read two variables it has two reading format */
    printf("O resultado de %d + %d = %d\n", n1, n2, n1+n2);
}