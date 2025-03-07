#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[5] = {1, 2, 3, 4, 5};
    int aux;

    for(int i=0; i<5/2; i++){
        aux = vetor1[i];
        vetor1[i] = vetor1[5-i-1];
        vetor1[5-i-1] = aux;
    }

    printf("Vetor invertido: ");
    for(int i=0; i<5; i++){
        printf("[%d] ", vetor1[i]);
    }

    return 0;
}
