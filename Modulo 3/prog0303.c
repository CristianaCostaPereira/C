#include <stdio.h>

main()
{
    int x;

    printf("Introduza um No: ");
    scanf("%d", &x);

    if (x!=0) /* instead it could be if (x) */
        printf("%d nao tem o valor de zero\n", x);
    
    else
        printf("%d igual a zero\n", x);
}