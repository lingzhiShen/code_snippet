#include <stdio.h>

void Visit(char e)
{
    printf("--%c\n", e);
}

int  main()
{
    char a;

    a = 'c';
    Visit(a);

    return 0;
}
