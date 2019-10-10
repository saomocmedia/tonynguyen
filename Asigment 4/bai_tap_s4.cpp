#include "stdio.h"
int main()
{
	int n;
	printf("Nhap so nguyen\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		if(i%2 !=0){
			printf("%d",i);
		}
		/* code */
	}
	/* code */
	return 0;
}