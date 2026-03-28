#include <stdio.h>

void fibonacci(int prev1, int prev2, int termo, int* count);

int main()
{

    int prev1 = 1, prev2 = 0;
    int count = 2;
    int termo;

    printf("Defina quantos termos a sequência de fibonacci terá: ");
    scanf("%d", &termo);

    printf("%d\n%d\n", prev2, prev1);

    fibonacci(prev1, prev2, termo, &count);

    return 0;
}

void fibonacci(int prev1, int prev2, int termo, int* count)
{
    if (*count <= termo)
    {
        int num = prev1 + prev2;

        printf("%d\n", num);

        prev2 = prev1;
        prev1 = num;

        (*count) += 1;

        fibonacci(prev1, prev2, termo, count);
    }
    else
    {
        return;
    }
}