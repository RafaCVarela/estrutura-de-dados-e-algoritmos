#include <stdio.h>

int main()
{
    int n1=0, n2=1, temp;
    int sequencia_fibonacci[20];

    sequencia_fibonacci[0] = n1;
    sequencia_fibonacci[1] = n2;

    for(int i=2; i < 20; i++)
    {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;

        sequencia_fibonacci[i] = n2;
    }

    for(int i=0; i < 20; i++)
    {
        printf("%d ", sequencia_fibonacci[i]);
    }

    return 0;
}