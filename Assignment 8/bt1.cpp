#include <stdio.h>//Nhập vào 1 mảng n các số và nhập vào 1 số x. Tìm xem x có nằm trong mảng không và có thì vị trí gần nhất là vị trí nào.
int main (){
	int n;
	printf ("Nhap n=\n");
	scanf ("%d",&n);
	int ary[n],x;
	int ary[n];
	for (int i =0 ;i < n;i++)
	{
		printf("Nhap phan tu ary[%d] = \n",i);
		scanf("%d",&ary[i]);
	}
	printf("Nhap x = \n");
	scanf("%d",&x);
	int i = 0;//meo khi dung bien chayj thi cho ra ngoai vong lap for
	for ( i = 0; i < n; ++i)
	{
		if(x == ary[i]){
			printf("%d nam trong mang vua nhap\n",x );
			printf("Tai vi tri gan nhat la: %d\n",i );
			break;
		}
	}
	if(i >= n){
		printf("%d khong nam trong mang\n",x );
	}

	return 0;
}