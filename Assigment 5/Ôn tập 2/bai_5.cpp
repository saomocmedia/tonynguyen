#include <stdio.h>//Tìm các số nguyên tố nhỏ hơn n.
int main()
{
	int n,i,j,dem=0;
        printf(" Nhap n: ");
        scanf("%d", &n);
        for (i=2;i<=n;i++)
        {
            for (j=1;j<=i;j++)
            {
                if(i%j==0)
                    dem++;
            }
            if(dem==2)
                printf("%d\t",i);
            dem=0;
        }
	return 0;
}