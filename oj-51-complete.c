#include <stdio.h>

int main()
{freopen("C:\\Users\\Root\\Downloads\\Input.txt", "r", stdin);
    int n, l, m;
    int x1, x2;
    int span[100][2];
    int i, j, k;
    int inclusion;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &l, &m);
        for(i = 0; i < m; i++)
        {
            inclusion = 0;
            scanf("%d %d", &x1, &x2);

            for(j = 0; j < i; j++)
            {
                if(x1 >= span[j][0] && x2 <= span[j][1])
                {
                    inclusion = 1;
                    i--;m--;
                    break;
                }
                else if(x1 <= span[j][0] && x2 >= span[j][1])
                {
                    k = j;
                    while(k < i)
                    {
                        span[k][0] = span[k + 1][0];
                        span[k][1] = span[k + 1][1];
                        k++;
                    }
                    i--;m--;j--;
                }
                else if(x1 < span[j][0] && x2 >= span[j][0] && x2 < span[j][1])
                {
                    x2 = span[j][0] - 1;
                }
                else if(x1 > span[j][0] && x1 <= span[j][1] && x2 > span[j][1])
                {
                    x1 = span[j][1] + 1;
                }
        }//end for 'j' in 'i'
            if(inclusion != 1)
            {
                span[i][0] = x1;
                span[i][1] = x2;
            }
        }//end for 'i' in 'm'
        l++;
        for(i = 0; i < m; i++)
        {
            l-=(span[i][1] - span[i][0] + 1);
        }
        printf("%d\n", l);
    }
    return 0;
}
