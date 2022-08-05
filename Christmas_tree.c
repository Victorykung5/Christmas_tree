#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int d = 0;
    int b = a;
    for (int k = 1; k <= a; k++)
    {
        for (int i = 1; i <= k + 1; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                printf(" ");
            }
            while (d != 2 * i - 1)
            {
                printf("*");
                ++d;
            }
            printf("\n");
            d = 0;
            b--;
        }
        b = a;
    }
    for (int h = 1; h <= a; h++)
    {
        printf(" ");
    }
    printf("|\n");
    for (int h = 1; h <= a; h++)
    {
        printf("=");
    }
    printf("V");
    for (int h = 1; h <= a; h++)
    {
        printf("=");
    }
    return 0;
}
