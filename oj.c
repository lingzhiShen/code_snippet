#include <stdio.h>
#include <math.h>

int function(int number)
{
    int i;
    int flag = 1;

    if(number == 1)
    {
        return 0;
    }

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
    {
        return number;
    }
    else
    {
        return 0;  //ÊÇËØÊı£¬·µ»Ø0
    }
}

int prime_reduce(int number)
{
    if(function(number) != 0)
    {
        if(number > 2)
        {
            printf("%d\n", number);
            prime_reduce(number - 1);
        }
    }
    else
    {
        printf("%d\n", number);
        return number;
    }
}


int main()
{
    int i = prime_reduce(8);

    printf("\n\n\n%d\n", i);

    return 0;
}
