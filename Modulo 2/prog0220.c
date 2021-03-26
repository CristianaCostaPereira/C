#include <stdio.h>

main()
{
    int dia, mes, ano;

    printf("Ano: ");
    scanf("%d", &ano);

    printf("Mes: ");
    scanf("%d", &mes);

    printf("Dia: ");
    scanf("%d", &dia);

    printf("Data: %d/%d/%d", dia, mes, ano);
}