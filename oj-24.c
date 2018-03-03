#include <stdio.h>
#include <math.h>

int function(int number)
{
    int i;
    int flag = 1;

    for(i = 2; i <= sqrt(number); i++)
    {
        if(number % i == 0)
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }

    if(flag == 0)
        return 0;
    else
        return number;
}

int prime_reduce(int number)
{
    if(function(number) == 0)
    {
        if(number > 2)
            prime_reduce(number - 1);
    }
    else
    {
        return number;
    }
}

int prime_add(int number)
{
    if(function(number) == 0)
        prime_add(number + 1);
    else
        return number;
}

int main()
{
    int repeat, n;
    int a, b, a_abs, b_abs;

    scanf("%d", &repeat);
    while(repeat-- > 0)
    {
        scanf("%d", &n);
        if(n == 1)
        {
            printf("2 1\n");
            continue;
        }

        a = prime_reduce(n);
        b = prime_add(n);

        if((a_abs = n - a) <= (b_abs = (b - n>0 ? b - n:n -b)))
            printf("%d %d\n", a, n - a);
        else
            printf("%d %d\n", b, b - n);
    }
    return 0;
}
