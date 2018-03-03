#include <stdio.h>

int main()
{
    int s, n, m, tmp_m;
    int i, num;

    scanf("%d", &s);
    while(s--)
    {
        num = 1;
        scanf("%d %d", &n, &m);
        if(n == 0 || n < m)
        {
            printf("0\n");
            continue;
        }
        for(i = m + 1; i <= n; ++i)
        {
            tmp_m = m;
            while(i % tmp_m == 0)
            {
                num ++;
                tmp_m *= m;
            }
        }
        printf("%d\n", num);
    }
    return 0;
}
