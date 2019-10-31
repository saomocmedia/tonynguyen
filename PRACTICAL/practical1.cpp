#include <stdio.h>

int main(){
	int x1=0,x2=1,x3;
	printf("Day so Fibo trong khoang 1 den 100 la: \n");
	for (int i = 2; x2+x1 < 100; ++i)
	{
		x3=x1+x2;
		x1=x2;
		x2=x3;
		printf("day so Fibo : %d\n",x3);
	}
	
	return 0;
}