#include <stdio.h>

void print_2(int val2);

int main(void)
{
    signed char x = 128;//溢出   0111 1111

    unsigned char y = x;

    printf("x = %d, y = %u\n", x, y);
    print_2(x);

    return 0;
}


void print_2(int val2)
{
	unsigned char *p = (unsigned char*)&val2 + 3; //从低位到高位,低端字节计算机
	int k;
	for(k = 0; k <= 3; k++)
	{
		int val2 = *(p-k);
		int i;
		for (i = 7; i >= 0; i--)
		{
			if(val2 & (1 << i))
				printf("1");
			else
				printf("0");
		}
		printf(" ");
	}
}
