#include <stdio.h>
#include <stdbool.h>

int main()
{
    int vetor1[5] = {10, 20, 9, 15, 21};
    int vetor2[5] = {5, 2, 3, 5, 7};
    int vetor3[5];
    int result;

    for(int i = 0; i < 5; i++) {
        vetor3[i] = vetor1[i] / vetor2[i];
        result = vetor3[i];
        printf ("\nCriação de um terceiro vetor por divisão: %d\n", result);
        result = 0;
    }
    
    return 0;
}
