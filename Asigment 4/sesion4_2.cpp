#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	/*
	printf("Nhap x = \n");
	scanf("%d",&x);
	while(x %2 !=0){
		printf("Nhap x = \n");
		scanf("%d",&x);
	}
	printf("x = %d\n",x );
	*/
	do{
	printf("Nhap x = \n");
	scanf("%d",&x);
	}while(x %2 !=0);
	printf("x = %d\n",x );
	/* code */
	return 0;
}