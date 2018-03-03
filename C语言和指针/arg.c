#include <stdio.h>
#include <stdarg.h>

float
average(int n_values, ...)
{
    va_list var_arg;
    int count;
    float sum = 0;

    va_start( var_arg, n_values);

    for (count = 0; count < n_values; count += 1)
    {
        sum += va_arg( var_arg, int );
    }

    va_end( var_arg );

    return sum / n_values;
}

int main(void)
{
    float result = average(5, 1, 2, 3, 4, 5);

    printf("%f\n", result);

    system("PAUSE");
    return 0;
}
