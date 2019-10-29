#include <stdio.h>
int main(int argc, char const *argv[])
{
	char str[20];
	printf("Nhap chuoi:\n");
	gets(str); //tuong duong voi scanf("%s",str);(khi gap %s khong can them dau & dang truoc str)
	printf("Chuoi vua nhap la:\n");
	puts(str);// tuong duong voi printf("%s",str);
	return 0;
}