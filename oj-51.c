#include <stdio.h>

int main()
{
//
freopen("C:\\Users\\Root\\Downloads\\Input.txt", "r", stdin);
//
    int span[100][2];
    int n, m, l;   //l:length m:number
    int x1, x2;
    int i, j, record;

    scanf("%d", &n);
    while(n--)
    {
        record = 1;
        scanf("%d %d", &l, &m);
        for(i = 0; i < m; i++)
        {
            scanf("%d %d", &x1, &x2);
            if(i == 0)
            {
                span[0][0] = x1;
                span[0][1] = x2;
                continue;
            }

            for(j = 0; j < i; j++)
            {
                if(x1 < span[j][0] && x2 > span[j][1])
                {
                    span[j][0] = x1;
                    span[j][1] = x2;//i--; m--;
                }
                else if(x1 > span[j][0] && x2 < span[j][1])
                {
                }
                else if(x1 < span[j][0] && x2 > span[j][0] && x2 < span[j][1])
                {
                    span[j][0] = x1;
                }
                else if(x1 > span[j][0] && x1 < span[j][1] && x2 > span[j][1])
                {
                    span[j][1] = x2;
                }
                else
                {
                    span[i][0] = x1;
                    span[i][1] = x2;
                    record++;
                    i++;
                    m++;
                }

                i--;
                m--;
            }//end for search by 'j' in 'i'
        }//end for search by 'i' 'm'

        l++;
        if(m != 0)
        {
            for(i = 0; i < record; i++)
            {
                l-=(span[i][1] - span[i][0] + 1);
            }
        }
        printf("%d\n", l);
    }//end while

    return 0;
}
