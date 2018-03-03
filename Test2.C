#include <stdio.h>
#include <math.h>

int main()
{
    double a[10], b[10];
    double redu;
    int i, num = 0;

    printf("指标值  检测值\n");

    for(i = 0; i < 10; i++)
        scanf("%lf %lf", a + i, b + i);

    for(i = 0; i < 10; i++)
    {
        redu = fabs(a[i] - b[i]);
        if(redu < a[i]*0.05)
        {
            printf("第%d件合格\n", i);
            num++;
        }
        else
            printf("第%d件不合格\n", i);
    }

    printf("合格率：%lf\n", num / 10);

    return 0;
}
