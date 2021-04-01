#include <stdio.h>

main()
{
    int a, b, resultado = 0;
    char operador;

    printf("Introduza uma expressao: ");
    scanf("%d %c %d", &a, &operador, &b);

    switch (operador)
        {
            case '+': resultado = a+b;
                break;
            case '-': resultado = a-b;
                break;
            case '*':
            case 'x':
            case 'X': resultado = a*b;
                break;
            case '/':
            case '\\':
            case ':': resultado = a/b;
                break;
        }

        printf("%d %c %d = %d\n", a, operador, b, resultado);
}