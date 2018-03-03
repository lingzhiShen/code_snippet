#include <stdio.h>

int main()
{
    int a[6] = {9, 7, 23, 6, 5, 0};

    QuickSort(a, 0, 5);

    int  i = 0;
    for(i; i < 6; i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}

void QuickSort(int *a, int low, int high)
{
    int pos;

    if(low < high)
    {
        pos = FindPos(a, low, high);
        QuickSort(a, low, pos-1);
        QuickSort(a, pos+1, high);
    }
}

int FindPos(int *a, int low, int high)
{
    int val = a[low];

    while(low < high)
    {
        while(low < high && a[high] >= val)
            --high;
        a[low] = a[high];

        while(low < high && a[low] <= val)
            ++low;
        a[high] = a[low];
    }

    a[low] = val;

    return high;
}
