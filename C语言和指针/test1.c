#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(;;)
    {
        for(i = 0; i < 9600000; i++)
            ;
        sleep(10);
    }
    getchar();
    return 0;
}
