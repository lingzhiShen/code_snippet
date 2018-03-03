#include <stdio.h>

struct node{
int a;
int b;
int c;
};

int main(void)
{
    struct node aa;
    aa.a = 1;
    aa.b = 2;
    aa.c = 3;

    struct node *p = &aa;

    printf("*p = %d \n", *p);
    printf("P = %p \n", p);
    printf("p + 1 = %p \n", p + 1);
    printf("*(p + 1) = %d \n", *((int *)p + 1));

    int array[2] = {1, 2};
    printf("array[1] = %d\n", array[1]);
    printf("1[array] = %d\n", 1[array]);

//    char ss[] = "HHH";
 //   printf("sizeof(ss) = %d\n", sizeof(ss));

 //   printf("strlen(ss) = %d\n", strlen(ss));

//float f1 = 3.14159;
//printf("%.4f\n", f1);

    return 0;
}
