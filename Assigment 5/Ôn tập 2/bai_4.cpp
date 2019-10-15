#include <stdio.h>//Nhập 1 số, kiểm tra có phải số hoàn hảo
int main()
{
	int n;
	printf("Nhap so can kiem tra: ");
	scanf("%d",&n);
	int S=0;
	for(int i=1;i<n;i++)
	{
		if(n % i==0)//
		{
			S+=i;
		}
	}
	if(S==n)
	{
		printf("%d la so hoan hao! ",n);
	}
	else 
	{
		printf("%d khong phai so hoan hao! ",n);
	}
	return 0;
}