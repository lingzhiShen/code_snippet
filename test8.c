#include <stdio.h>

int main()
{
    int i;
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    printf("%d\n\n", a[1][1]);
    for(i = 0; i < 3*4; ++i)
        printf("%d\n", a[i]);

    return 0;
}
