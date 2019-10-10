#include <stdio.h>
int main()
{
	int a;
	printf("Nhap so\n");
	scanf("%d",&a);
	if(a>0){
		printf("%d la so nguyen duong\n",a);
	}else if(a<0){
		printf("%d la so nguyen am\n",a);
	}else if(a<0){
		printf("%d la so bede\n",a);
	}
	return 0;
}