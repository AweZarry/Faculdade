#include <stdio.h>
#include <stdbool.h>

int main()
{
    int numero[5] = {5, 6, 1, 8, 2};
    int numerouser;
    int result;
    int pos;
    bool verify = false ;

    printf("Digite um numero:");
    scanf("%d", &numerouser);

    for(int i = 0; i < 5; i++) {
        if (numero[i] == numerouser) {
            result = numero[i];
            pos = i;
            verify = true;
            break;
        }
    }

    if (verify == true) {
        printf("Seu número esta no vetor: %d\n", result);
        printf("Posição do numero: %d\n", pos);
    }else{
        printf("Seu numero não esta no vetor");
    }

    return 0;
}
