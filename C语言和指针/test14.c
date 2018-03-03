#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*
int
main(void)
{
    ungetc('\n', stdin);
    printf("%c", getc(stdin));

    ungetc('a', stdin);
    printf("%c", getc(stdin));

    ungetc('b', stdin);
    printf("%c", getc(stdin));

    ungetc('c', stdin);
    printf("%c", getc(stdin));

    return 0;
}
*/

//int
//main(void)
//{
//    ungetc('c', stdin);
//    ungetc('b', stdin);
//    ungetc('a', stdin);
//    ungetc('\n', stdin);

//    printf("%c", getc(stdin));
//    printf("%c", getc(stdin));
//    printf("%c", getc(stdin));
//    printf("%c", getc(stdin));

//    return 0;
//}
/*
int
main(void)
{
    double value = 3.14159;
    int exponent = 0;
    double fraction = frexp(value, &exponent);

    printf("frexp(3.14159, &exponent) = %lf£¬ exponent = %d\n", fraction, exponent);

    printf("%lf\n", ldexp(fraction, exponent));

    double part1 = 0;
    double part2 = modf(value, &part1);

    printf("modf(3.14159, &part1) = %lf, part1 = %lf\n", part2, part1);

    return 0;
}
*/

int
main(void)
{
    int ch = '\48';

    printf("%c\n", ch);
    //struct lconv * lcv = (struct lconv *)malloc(sizeof(struct lconv));
    struct lconv *lcv = localeconv();

    printf("%s\n", lcv->grouping);

    setlocale(LC_NUMERIC, "\2");
    lcv->grouping = "\3";

    long long int num = 1234567891;
    printf("%ld\n", num);

    return 0;
}
