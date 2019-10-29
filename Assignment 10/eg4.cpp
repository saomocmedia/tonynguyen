#include <stdio.h>
#include <string.h>

void chuyenVietHoa(char s[]){
	for (int i = 0; i < strlen(s); ++i)
	{
		if(s[i]>=97 && s[i]<=122){// 97=a, 122=z
			s[i]-=32;
		}
	}
	printf("chuoi sau khi chuyen hoa: %s\n", s);
}

void inracacchuoi(char s[][20], int n){// truyen vao 1 mang cac chuoi va moi chuoi khong qua 20 ky tu
	for (int i = 0; i < n; ++i)
	{
		printf("chuoi %d la: %s\n",i,s[i] );
	}
}

int main(int argc, char const *argv[])
{
	char s1[20], s2[20];
	char s3[5][20];//mang ky tu 5 chuoi, moi chuoi 20 ky tu, mang 2 chieu (tap hop mang don cac chuoi)
	printf("Nhap chuoi s1:\n");
	scanf("%s",s1);
	printf("Nhap chuoi s2\n");
	scanf("%s",s2);

	for (int i = 0; i < 5; ++i)
	{
		scanf("%s",s3[i]);
	}

	chuyenVietHoa(s1);
	printf("\n");

	printf("Do dai chuoi s1: %lu\n",strlen(s1) );
	printf("Do dai chuoi s2: %lu\n",strlen(s2) );

	printf("Chuoi dao nguoc cua s1: \n");
	for (int i = strlen(s1)-1; i >= 0; --i)
	{
		printf("%c",s1[i] );
	}
	printf("\n");

	strcpy(s1,s2);
	printf("Chuoi s1 vua nhap la: %s \n",s1 );
	printf("Chuoi s2 vua nhap la: %s \n",s2 );

	return 0;
}