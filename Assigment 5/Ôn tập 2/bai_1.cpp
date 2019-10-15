#include <stdio.h>//Viết chương trình tính S = 1 + 1/2 + 1/3 + … + 1/N
int main()
{
	int n;
	float S=0;
	scanf("%d",&n);
	for (int i = 1; i <=n; ++i)
	{
		S=S+(float)1/i;
	}
	printf("%f\n",S );
	return 0;
}