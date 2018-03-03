/*
Error quick Sort!!
*/

#include <stdio.h>

int findPos(int array[], int low, int high)
{
    int tmp = array[low];

    while(high > low)
    {
        if(tmp >= array[high])
        {
            array[low] = array[high];
            low++;
        }
        if(tmp <= array[low])
        {
            array[high] = array[low];
            high--;
        }
    }

    return high;
}

void quickSort(int array[], int low, int high)
{
    int pos;
    if(low < high)
    {
        pos = findPos(array, low, high);
        array[pos] = array[low];
        quickSort(array, low, pos-1);
        quickSort(array, pos+1, high);
    }
}

int main()
{
    int test[5] = {2, 3, 1, 5, 4};
    int i = 0;

    quickSort(test, 0, 4);

    for(i; i < 5; i++)
    {
        printf("%d\n", test[i]);
    }

    getchar();
    return 0;
}
