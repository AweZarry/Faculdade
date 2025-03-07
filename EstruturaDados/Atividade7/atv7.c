#include <stdio.h>
#include <stdbool.h>

int main()
{
    int vetor1[5] = {10, 20, 3, 15, 7};
    int vetor2[5] = {10, 20, 3, 15, 7};
    int produtoescalar;

    for(int i = 0; i < 5; i++) {
        produtoescalar += vetor1[i] * vetor2[i];
    }
    
    printf ("\nSoma do produto escalar: %d\n", produtoescalar);

    return 0;
}
