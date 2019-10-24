#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ary[9] = {3,1,99,23,11,5,9,12,8};
	int temp;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9-i-1; ++j)
		{
			if(ary[j]>ary[j+1]){//muon chuyen tu lon xuong be thi thay dau ">" thanh dau "<"
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
 			}
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		printf("%d\n",ary[i] );
	}
	return 0;
}