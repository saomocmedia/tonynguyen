#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	do{
		printf("Vui long chon chuc nang\n");
		printf("1. goi do uong\n");
		printf("2. goi mon an\n");
		printf("3. tinh tien\n");
		printf("4. thoat\n");
		scanf("%d",&n);
	}while(n>4||n<1);
	switch(n){
		case 1:printf("KH vua goi do uong\n");break;
		case 2:printf("KH vua goi mon an\n");break;break;
		case 3:printf("KH vua goi tinh tien\n");break;
		case 4:printf("KH vua thoat\n");break;
	}
	/* code */
	return 0;
}