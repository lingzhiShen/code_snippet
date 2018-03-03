#include <stdio.h>

int *
function(key, array, array_len)
int key;
int array[];
int array_len;
{
    int i;
    for ( i = 0; i < array_len; ++i)
    {
        printf("%d\n", array[i]);
    }

    return NULL;
}

int
main(int argc, char **argv)
{
    int a[3] = {1, 2, 3};
    function( 1, a, 3);

    return 0;
}
