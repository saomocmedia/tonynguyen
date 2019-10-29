#include<stdio.h>//In ra các số lẻ trong 1 mảng
void nhapmang(int ary[],int n){
	for ( int i = 0;i < n;i++)
	{
		printf("Nhap ary[%d]=\n",i);
		scanf("%d",&ary[i]);
	}
}
void mangsole(int ary[],int n){
	for (int i = 0;i <= n;i++)
	{
			if (ary[i]%2 != 0){
				printf("%d\t",ary[i]);
				break;
			}
		}
	}

void inmang(int ary[],int n){
	for (int i = 0;i < n;i++)
	{
		printf("%d\t",ary[i]);
	}
}
int main (){
	int ary[5];
	nhapmang(ary,5);
	mangsole(ary,5);
	inmang(ary,5);
	return 0;
}
