#include<stdio.h>//Tìm 1 số có nằm trong mảng hay không ( tìm kiếm)
void nhapmang(int ary[],int n){
	for (int i = 0;i < n;i++)
	{
		printf("Nhap ary[%d]=\n",i);
		scanf("%d",&ary[i]);
	}
}
int nhapmangtimkiem(int ary[],int n,int x){ 
	int i = 0;
	for( i=0;i < n;i++)
	{
		if(x == ary[i]){
			printf("%d nam trong mang vua nhap\n",x);
			printf("tai vi tri gan nhat: %d\n",i);
			break;
		}
	}
	if(i >= n){
		printf("%d khong nam trong mang\n",x);
	}
	return x;
}
int main (){
	int ary[5];
	nhapmang(ary,5);
	nhapmangtimkiem(ary,5,6);
	
	
	return 0;
}
