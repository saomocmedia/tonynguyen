#include <stdio.h>//Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu
int main(int argc, char const *argv[])
{
	int n;
	printf("Nhap n =\n");
	scanf("%d",&n);
	int ary[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap phan tu ary[%d]\n",i);
		scanf("%d",&ary[i]);
	}
	int dem = 0, max_dem=0;
	for (int i = 0; i < n; ++i)
	{
		if(ary[i] >0){
			dem+=ary[i];
		}else{
			dem = 0;
		}
		if(dem > max_dem){
				max_dem = dem;
		}
	}
	printf("Chuoi so duong dai nhat: %d\n",max_dem );
	return 0;
}