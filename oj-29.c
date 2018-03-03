#include <stdio.h>

int main()
{
    int quare[3][3];
    int n, i;

    scanf("%d", &n);
    while(n--)
    {
        for(i = 0; i < 3; ++i)
            scanf("%d %d %d", quare[i] + 0, quare[i] + 1, quare[i] + 2);

        for(i = 0; i < 3; ++i)
            printf("%d %d %d\n", quare[0][i], quare[1][i], quare[2][i]);
    }
    return 0;
}
