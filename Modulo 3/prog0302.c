#include <stdio.h>

main()
{
    int x;

    printf("Digite um No: ");
    scanf("%d", &x);

    if (x>=0)
        printf("No positivo\n");

    else
        printf("No Negativo\n");
}