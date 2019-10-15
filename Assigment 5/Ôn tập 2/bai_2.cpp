#include <stdio.h>//Viết chương trình tính n! biết n! = 1.2.3.4…n
int main()
{
	int i, n, x = 1;

 printf("nhap so de tinh giai thua\n");

 scanf("%d", &n);

 for (i = 1; i <= n; ++i)

   x = x * i;

 printf("giai thua cua %d = %d\n", n, x);
	return 0;
}