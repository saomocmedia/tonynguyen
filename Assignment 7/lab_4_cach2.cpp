#include <stdio.h>
int main()
{
	int n;
	printf("Nhap n =\n");
	scanf("%d",&n);
	int ary[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap ary[%d] = \n",i );
		scanf("%d",&ary[i]);
		for (int j = 0; j < i; ++i)
		{
			if(ary[j] == ary[i]){//nghia la bat ky khi nao bi trung so thi j khong bao gio thoat khoi vong lap
				printf("Nhap lai ary[%d] = \n",i);
				scanf("%d",&ary[i]);
				j=-1;
			}
		}
	}
	return 0;
}