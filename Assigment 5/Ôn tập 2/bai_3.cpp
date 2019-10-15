#include <stdio.h>//Tính tổng 100 số lẻ > 0 đầu tiên
int main()
{
	int S=0;
	int i=1;
	for (int i = 0, j=0; i < 3; ++j)
	{
		if(j%2!=0)/*chia lấy phần dư và khác 0*/{
			S += j/*tương đương S = S + j*/;
			i++;
		}
	}
	/*
	for (int i = 0, j = 1; i < 100; ++i, j+=2)
	{
		S+=j;
	}
	*/
	printf("Tong 100 so le: %d\n",S );
	return 0;
}