#include <stdio.h>

main()
{
    char ch;
    printf("Introduza um caracter: ");
    scanf("%c", &ch);

    printf("O caracter '%c' tem o ASCII no %d\n", ch, (int) ch);
}