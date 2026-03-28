#include <stdio.h>

int main()
{
    int meu_array[5] = {15, 78, 12, 36, 5};
    int menorValor = meu_array[0];
    int tamanhoArray = sizeof(meu_array)/sizeof(meu_array[0]);

    for (int i=0; i < tamanhoArray; i++)
    {
        if (menorValor > meu_array[i])
        {
            menorValor = meu_array[i];
        }
    }

    printf("O menor valor do array é %d", menorValor);

    return 0;
}