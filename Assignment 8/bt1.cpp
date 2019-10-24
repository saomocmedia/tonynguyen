#include <stdio.h>
int main (){
	int i,j,temp;
	int n;
	printf ("Nhap n=\n");
	scanf ("%d",&n);
	int ary[n];
	for (int i =0 ;i < n;i++)
	{
		printf("Nhap phan tu ary[%d]\n",i);
		scanf("%d",&ary[i]);
	}
	for ( int i = 1; i < n; i++)
	{
		j = i -1;
		temp = ary[i];
		while((j >= 0) && (temp <ary[j]))
		{
			ary[j+1]=ary[j];
			j--;
		}
		ary[j+1]=temp;
	}
	for ( int j = 0;j < n;j++);
	{
		printf ("%d",&ary[j]);
	}
	int x;
	printf ("Nhap x: \n");
	scanf ("%d",&x);
	int mid;
	int low;
	int high;
	int searchvalue;
	int flag = 0;
	while (low <= high)
	{
		int mid = low + (high - low)/2;
		if (searchvalue == ary[mid])
		{
			flag = 1;
			printf ("Vi tri gan nhat cua x la %d\n",mid);
			break;
		}else if(searchvalue < ary[mid]){
			high = mid - 1;
		}else if(searchvalue > ary[mid]){
			low = mid + 1;
		}
	}
	if(flag = 0){
		printf ("x khong thuoc day tren\n");
	}
	return 0;
}