#include <stdio.h>

int main()
{
    int a[6] = {5, 7, 8, 2, 1, 9};
    int i;

    QuickSort(a, 0, 5);

    for(i = 0; i< 6; i++)
    {
        printf("%d ", a[i]);
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
            high--;
        a[low] = a[high];

        while(low < high && a[low] <= val)
            low++;
        a[high] = a[low];
    }
    a[high] = val;

    return high;
}
