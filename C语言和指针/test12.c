#include <stdio.h>

#define PRINT(FORMAT,VALUE) printf("the value of " #VALUE " is " FORMAT"\n", VALUE)

#define ADD_TO_SUM(sum_number, value) sum##sum_number+=value

int
main(void)
{
 //   #ifdef __STDC__
 //   printf("llll %d\n", __STDC__);
 //   #endif // __STDC__

    int x = 1;
    PRINT("%d", x+3);

    int sum5 = 2;
    printf("sum5 = %d\n", sum5);
    ADD_TO_SUM(5,25);
    printf("sum5 = %d\n", sum5);

    return 0;
}
