#include <stdio.h>

int main()
{
    freopen("C:\\Users\\Root\\Downloads\\Input.txt", "r", stdin);
    int n, l, m;//record == m?
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
                    printf("1. i = %d, j = %d\n", i, j);
                    break;
                }
                else if(x1 < span[j][0] && x2 > span[j][1])
                {
                    while(j < i)
                    {
                        span[j][0] = span[j + 1][0];
                        span[j][1] = span[j + 1][1];
                        j++;
                    }
                    //span[j][0] = x1;
                    //span[j][1] = x2;
                    inclusion = 1;
                    j = 0;
                    printf("2. i = %d, j = %d\n", i, j);
                }
                else if(x1 < span[j][0] && x2 >= span[j][0] && x2 < span[j][1])
                {
                    x2 = span[j][0] - 1;
                }
                else if(x1 >= span[j][0] && x1 <= span[j][1] && x2 > span[j][1])
                {
                    x1 = span[j][1] + 1;
                }
                printf("i = %d, j = %d, x1 = %d, x2 = %d\n\n", i, j, x1, x2);
            }//end for 'j' in 'i'
            if(inclusion != 1)
            {
                printf("i = %d\n", i);
                printf("i = %d, x1 = %d, x2 = %d\n\n", i, x1, x2);
                span[i][0] = x1;
                span[i][1] = x2;
            }
            else
            {
                i--;
                m--;
            }
        }//end for 'i' in 'm'

        l++;
        for(i = 0; i < m; i++)
        {
            //printf("x1 = %d, x2 = %d\t", span[i][0], span[i][1]);
            //printf("---%d\n", span[i][1] - span[i][0] + 1);
            l-=(span[i][1] - span[i][0] + 1);
        }
        printf("%d\n", l);
        printf("\n-----------------------------\n");
    }
    return 0;
}
