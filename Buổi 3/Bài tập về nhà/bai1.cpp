#include <stdio.h>
int main()
{
	int a,b;
	printf("Nhap so thu nhat:\n");
	scanf("%d",&a);
	printf("Nhap so thu hai:\n");
	scanf("%d",&b);
	if(a>b){
		printf("So lon hon la: %d\n",a);
	}else if(a<b){
		printf("So lon hon la: %d\n",b );
	}else if(a==b){
		printf("2 so bang nhau\n");
	}
	return 0;
}