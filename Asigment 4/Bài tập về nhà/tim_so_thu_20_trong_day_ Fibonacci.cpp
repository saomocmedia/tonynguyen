#include <stdio.h>/*Tìm số thứ 20 trong dãy số Fibonacci 0,1,1,2,3,5...*/
int main()
{
	int x1=1,x2=1,x3=2;
	for (int i = 4; i <= 20; ++i)/*i = 4 boi vi da biet 3 so dau tien 0,1,1*/
	{
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	printf("So Fibo 20: %d\n",x3);
	return 0;
}