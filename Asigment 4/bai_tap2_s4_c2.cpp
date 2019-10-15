#include <stdio.h>
int main()
{
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int i=1, dem=0;
	//while(i<=n){
	//	if(n%i==0){
	//		dem++;
	//	}
	//	i++;
	//}
	for (int i = 1; i <=n; ++i)
	{
		if(n%i==0){
			dem++;
		}
		/* code */
	}
	if(dem != 2){
		printf("khong phai so nguyen to\n");
	}else{
		printf("la so nguyen to\n");
	}
	/* code */
	return 0;
}