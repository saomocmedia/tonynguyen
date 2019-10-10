#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("Nhap canh thu nhat\n");
	scanf("%d",&a);
	printf("Nhap canh thu hai\n");
	scanf("%d",&b);
	printf("Nhap canh thu ba\n");
	scanf("%d",&c);
	if ((a<b+c)&&(b<a+c)&&(c<a+b)){
	printf("Day la tam giac\n");
	}else{
	printf("Day khong phai tam giac\n");
	}
	int p = a+b+c;
	printf ("Chu vi cua tam giac la:%d\n",p);
	int s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf ("dien tich cua tam giac la:%d\n",);
	return 0;
}