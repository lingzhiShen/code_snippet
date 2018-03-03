#include <stdio.h>

int main()
{
    int i, j;
    int sum = 0;

    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            sum = i*1000 + j*100 + 10 + 2;

            if((sum - 7) % 7 == 0 && (sum - 8) % 8 == 0 && (sum - 9) % 9 == 0)
            {
                printf("n = %d\n", sum);
            }
        }
    }

    return 0;
}
