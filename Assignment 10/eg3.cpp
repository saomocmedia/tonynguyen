#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char s1[20], s2[20];
	printf("Nhap chuoi 1:\n");
	scanf("%s",s1);
	printf("Nhap chuoi s2\n");
	scanf("%s",s2);
	printf("so sanh s1 va s2: %d\n",strcmp(s1,s2) );
	printf("Vi tri cua ky tu l trong s1: %lu\n",strchr(s1,'l')-s1 );//lu = long unsigned int
	return 0;
}