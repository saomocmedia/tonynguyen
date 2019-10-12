#include <stdio.h>/*Yêu cầu người dùng nhập vào đúng 3 cạnh 1 tam giác ( Sai bắt nhập lại)*/
int main()
{
	int a,b,c;
	do{
		printf("nhap canh thu nhat\n");
		scanf("%d",&a);
		printf("nhap canh thu hai\n");
		scanf("%d",&b);
		printf("nhap canh thu ba\n");
		scanf("%d",&c);
}	while((a>=b+c)||(b>=a+c)||(c>=a+b));/*while(!(a+b> && b+c>a && a+c>b));*/
	printf("da duoc 3 canh tam giac\n");
	return 0;
}