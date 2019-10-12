#include <stdio.h>/*Nhập vào 1 tự nhiên n, tìm các số < n chia hết cho 3*/
int main()
{
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		if(i%3==0){
			printf("%d\n",i );
		}
	}
	return 0;
}