#include <stdio.h>
#include <stdbool.h>

int main()
{
    int vetor1[5] = {10, 20, 3, 15, 7};
    int numero;
    int result = 0;

    printf ("\nDigite um numero:\n");
    scanf ("%d", &numero);

    for(int i = 0; i < 5; i++) {
        vetor1[i] = vetor1[i] * numero;
        result = vetor1[i];
        printf ("\nAqui esta a multiplicação do elemento: %d\n", i);
        printf ("%d\n", result);
        result = 0;
    }
    return 0;
}
