#include <stdio.h>
/*
char *getMem(void)
{
    char *p = "hello world";

    //p[5] = 0x0;
//printf(" 1- %s\n", p);
    return p;
}

void test(void )
{
    char *s = 0x0;

    s = getMem();

    printf("%s\n", s);
}
*/
/*
void f(char **p){
    *p += 2;
}

void main() {
    char *a[] = { "123" , "abc" , "456" }, **p;
    p = a;
    f(p);
    printf( "%c\n", **p);
}
*/
/*
int main(void)
{
    test();

    return 0;
}
*/
/*
int
main(void)
{
    int a[] = {1,2,3,4,5};
    int *p = a + 2;
    printf("%d\n", *p);
    return 0;
}
*/

int read_column_numbers( int columns[], int max )
{

    int num = 0;
    int ch;

    while (num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
        num += 1;

    if (num % 2 != 0)
    {
        printf("Eor ! 1\n");
        exit(0);
    }

    while ((ch = getchar()) != EOF && ch != '\n')//
    {
        printf("ppppp\n");
    }

    int j;
    for (j = 0; j < num; ++j)
    {
        printf("%d\n", columns[j]);
    }

    return num;
}

int main(void)
{
    int col[20];

    read_column_numbers(col, 20);

    return 0;
}
