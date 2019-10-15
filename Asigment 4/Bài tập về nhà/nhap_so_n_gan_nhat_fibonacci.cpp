#include <stdio.h>
int main()/*nhập 1 số n, tìm số gần nhất <= số n trong dãy fibonacci, ứng dụng cắt đoạn văn*/
{
	int n;
	printf("Nhap so n: \n");
	scanf("%d",&n);
	int x1=1,x2=1,x3=2;
	for (int i = 4; x2+x3<=n; ++i)/*for (int i = 4; x3 >n; ++i) dung de tim so >=n*/
	{
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	printf("So Fibo gan n nhat: %d\n",x3);
	return 0;
}