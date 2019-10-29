#include <stdio.h>
#include <iostream>
int main(int argc, char const *argv[])
{
	int x = 10;
	float *q;
	int *p;
	printf("x = %d\n",x );
	printf("dia chi cua x: \n");
	std::cout << &x;
	p = &x;
	printf("\n p = \n");
	std::cout << p;
	printf("gia tri cua o dia chi do: %d\n",*p ); // tham chiếu gián tiếp
	x +=5;
	printf("x sau khi tang them: %d \n",x);
	(*p)+=5;
	printf("sau khi dung p de tang: %d\n",x );
	return 0;
}