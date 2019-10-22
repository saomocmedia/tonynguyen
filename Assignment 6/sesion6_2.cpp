#include <stdio.h>//tim so nho nhat va so lon nhat
int main()
{
	int ary[10];
	ary[0] = 20;
	ary[5] = 7;
	ary[9] = 11;

	for (int i = 0; i < 10; ++i)
	{
		printf("Nhap phan tu thu %d\n",i );
		scanf("%d",&ary[i]);//duyet mang de nhap gia tri
	}
	int max = ary[0];
	int min = ary[0];
	for (int i = 0; i < 10; ++i)
	{
		if(max < ary[i]){
			max = ary[i];
		}
		if(min > ary[i]){
			min = ary[i];
		}
	}
	printf("Max = %d\n",max );
	printf("Min = %d\n",min );
	return 0;
}