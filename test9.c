#include <stdio.h>
/*
struct test{
    int a;
    int b;
    int c;
};

int main()
{
    struct test t1 = {10,20};
    struct test t2 = {.a = 10,
                .c = 20};

    printf("%d %d\n", t1.a, t1.c);
    printf("%d %d\n", t2.a, t2.c);
    //printf("%d", sizeof(struct test));

    return 0;
}
*/

union test{
    int a;
    char b;
}test1;

int  main()
{
    test1.a = 1;

    printf("%d\n", test1.b);

    return 0;
}
