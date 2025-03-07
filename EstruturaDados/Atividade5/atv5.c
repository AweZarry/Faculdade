#include <stdio.h>
#include <stdbool.h>

int main()
{
    int vetor1[5] = {10, 20, 3, 15, 7};
    int vetor2[5] = {9, 25, 22, 65, 23};
    int vetor3[5];
    int vetor4[5];
    int result;
    printf ("\nSoma dos Elementos\n");
    for(int i = 0; i < 5; i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
        result = vetor3[i];
        printf ("\nAqui esta a soma do elemento: %d\n", i);
        printf ("%d\n", result);
    }
    printf ("\nSubtração dos Elementos\n");
    for(int i = 0; i < 5; i++) {
        vetor3[i] = vetor1[i] - vetor2[i];
        result = vetor3[i];
        printf ("\nAqui esta a subtração do elemento: %d\n", i);
        printf ("%d\n", result);
    }

    return 0;
}
