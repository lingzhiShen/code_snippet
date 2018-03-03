#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    int a1, a2;
    int b1, b2;
    int f, f1, f2;
    int len;
    int i, j, k;
    int power = 1;

    k = 2;
    while(k--)
    {
        scanf("%s", str1);
        len = strlen(str1);

        for(i = 0; i < len; ++i)
        {
            if(str1[i] == '.')
                break;
            str2[i] = str1[i];
        }
        str2[i] = '\0';
        a1 = atoi(str2);

        strcpy(str2, str1 + i + 1);
        a2 = atoi(str2);
        f2 = len - i - 1;

        if(k == 1)
        {
            b1 = a1;
            b2 = a2;
            f1 = f2;
        }
    }

    f = f1>f2?f1:f2;
    if(f1 != f)
    {
        for(i = 0; i < f - f1; ++i)
            b2 *= 10;
    }
    else if(f2 != f)
    {
        for(i = 0; i < f - f2; ++i)
            a2 *= 10;
    }

    k = f;
    while(k--)
        power *= 10;

    a2 += b2;
    a1 += b1;
    if(a2 / power != 0)
    {
        a2 = a2 % power;
        a1++;
    }

    itoa(a2, str2, 10);
    memset(str1, 0, 100);
    len = strlen(str2);

    for(i = 0; i < f - len; ++i)
        strcat(str1, "0");
    itoa(a2, str2, 10);
    strcat(str1, str2);

    itoa(a1, str2, 10);
    strcat(str2, ".");
    strcat(str2, str1);

    printf("%s\n", str2);

    return 0;
}
