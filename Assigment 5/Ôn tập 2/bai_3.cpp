#include <stdio.h>//Tính tổng 100 số lẻ > 0 đầu tiên
int main()
{
	int S=0;
	int i=1;
	for(int dem=0;dem<100;dem++)
	{
		S+=i;
		i+=2;
	}
	printf("%d",S);
	return 0;
}