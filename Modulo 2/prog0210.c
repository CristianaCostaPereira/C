#include <stdio.h>

main()
{   char ch;

    printf("Lea%cning to %crogramming in \"%c\"!\n", 'r', 'P', 'C');

    printf("Introduza um caracter: ");
    scanf("%c", &ch);

    printf("O caracter introduzido foi '%c' \n", ch);
}