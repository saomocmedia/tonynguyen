#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("Nhap so nghich dao:\n");
	int t=0;
	while(n!=0){
		t=t*10+n%10;
		n=n/10; // n/=10;
	}
	printf("t=%d\n",t);
	return 0;
}