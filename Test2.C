#include <stdio.h>
#include <math.h>

int main()
{
    double a[10], b[10];
    double redu;
    int i, num = 0;

    printf("ָ��ֵ  ���ֵ\n");

    for(i = 0; i < 10; i++)
        scanf("%lf %lf", a + i, b + i);

    for(i = 0; i < 10; i++)
    {
        redu = fabs(a[i] - b[i]);
        if(redu < a[i]*0.05)
        {
            printf("��%d���ϸ�\n", i);
            num++;
        }
        else
            printf("��%d�����ϸ�\n", i);
    }

    printf("�ϸ��ʣ�%lf\n", num / 10);

    return 0;
}