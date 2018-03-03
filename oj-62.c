#include <stdio.h>
#include <string.h>
#include <math.h>

int isPrime(int num)
{
    int i;

    for(i = 2; i < sqrt(num); ++i)
    {
        if(num % i == 0)
            return 1;
    }
    return 0;
}

void isLuck(char *str)
{
    int i, j, len;
    int max, min, num;

    len = strlen(str);
    max = 1;
    min = len;

    for(i = 0; i < len; ++i)
    {
        num = 1;
        for(j = i + 1; j < len; ++j)
        {
            if(str[i] == str[j])
                num++;
        }
        if(num > max)
            max = num;
        if(num < min)
            min = num;
    }
    printf("max = %d, min = %d\n", max, min);
    if((max == min) || isPrime(max - min))
        printf("No Answer\n0\n");
    else
        printf("Lucky Word\n%d\n", max - min);
}

int main()
{
    int n;
    char ch;
    char word[20];
    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", word);

        isLuck(word);
    }

    return 0;
}
