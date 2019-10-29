#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char s1[20], s2[20];
	printf("Nhap chuoi 1:\n");
	scanf("%s",s1);
	printf("Nhap chuoi s2\n");
	scanf("%s",s2);
	strcat(s1,s2);
	printf("Chuoi s1 vua nhap la: %s \n",s1 );
	printf("Chuoi s2 vua nhap la: %s \n",s2 );
	strcat(s2,s1);
	printf("Chuoi s1 vua nhap la: %s \n",s1 );
	printf("Chuoi s2 vua nhap la: %s \n",s2 );
	return 0;
}