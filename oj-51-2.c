#include <stdio.h>

int main()
{
    freopen("C:\\Users\\Root\\Downloads\\Input.txt", "r", stdin);
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
                //printf("++++++++\n");
                if(x1 >= span[j][0] && x2 <= span[j][1])
                {
                    inclusion = 1;
                    i--;m--;
                    //printf("1. i = %d, j = %d\n", i, j);
                    printf("--1.\n");
                    break;
                }
                else if(x1 <= span[j][0] && x2 >= span[j][1])
                {
                    int k = j;
                    while(k < i)
                    {
                        span[k][0] = span[k + 1][0];
                        span[k][1] = span[k + 1][1];
                        k++;
                    }
                    i--;m--;j--;
                    printf("--2.\n");
                }
                else if(x1 < span[j][0] && x2 >= span[j][0] && x2 < span[j][1])
                {
                    x2 = span[j][0] - 1;
                    //printf("j = %d\n", j);
                    printf("--3.\n");
                }
                else if(x1 > span[j][0] && x1 <= span[j][1] && x2 > span[j][1])
                {
                    x1 = span[j][1] + 1;
                    printf("--4.\n");
                }
                printf("j = %d\n", j);
        }//end for 'j' in 'i'
        //printf("i = %d, j = %d, x1 = %d, x2 = %d\n\n", i, j, x1, x2);
            if(inclusion != 1)
            {
                span[i][0] = x1;
                span[i][1] = x2;
            }
        }//end for 'i' in 'm'

for(i = 0; i < m; i++)
{
    printf("\n---%d, %d\n", span[i][0], span[i][1]);
}

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
