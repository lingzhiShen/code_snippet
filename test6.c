#include <stdio.h>
/*
int main()
{
    int a[10] = {};
    int i;

    for(i = 0; i < 10; ++i)
        printf("%d\n", a[i]);

    return 0;
}

int main()
{
    int a = 1, b = 2, c = 3;
    int x;
    x = a^b;

    printf("%d\n", x);

    return 0;
}*/
/*
int main()
{
    int n = 6;

    switch(n--)
    {
        default:printf("%d", n++);
        case 3:printf("%d", n--);break;
        case 2:printf("%d", n++);
        case 1:printf("%d", n--);
    }
}


int main()
{
    int *a, *b, *c;

    a - b;

    return 0;
}

int main()
{
    int num = 15;

    printf("%s\n", (num%2)?"yy":"lod");

    return 0;
}*/


#define N 4
int main()
{
    int a[N][N], i, j, sum1 = 0, sum2 = 0;

    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
        {
            printf("%d = , %d = \n", i, j);
            scanf("%d", *(a + i) + j);
        }

    for(j = 0; j < N; j++)
    {
        sum1 += a[j][j];
        sum2 += a[j][3 - j];
    }
    printf("%d, %d\n", sum1, sum2);

    return 0;
}
