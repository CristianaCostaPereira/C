#include <stdio.h>

main()
{
    short int idade;
    int montante;
    long int n_conta;

    printf("Idade: ");
    scanf("%hd", &idade);

    printf("Montante a depositar: ");
    scanf("%d", &montante);

    printf("Numero de conta: ");
    scanf("%ld", &n_conta);

    printf("Uma pessoa de %hd anos depositou %d$ na conta %ld\n", idade, montante, n_conta);
}
