#include <stdio.h>//tim so gan so nho nhat va gan so lon nhat
int main()
{
	int ary[10];
	ary[0] = 10;

	for (int i = 0; i < 10; ++i)
	{
		printf("Nhap phan tu thu %d\n",i );
		scanf("%d",&ary[i]);//duyet mang de nhap gia tri
	}
	int max = ary[0];//tim so nho nhat va so lon nhat
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
	printf("gan so Max = %d\n",max );
	printf("gan so Min = %d\n",min );
	int g_max = min, g_min=max;
	/* truong hop chi tim so canh so lon nhat
	for (int i = 0; i < 10; ++i)
	{
		if(ary[i] <max){
			g_max = ary[i];
			break;
		}
	}
	*/
	for (int i = 0; i < 10; ++i)
	{
		if(g_max < ary[i] && ary[i] < max){
			g_max = ary[i];
		}
		if(g_min > ary[i] && ary[i] > min){
			g_min = ary[i];
		}
	}
	return 0;
}