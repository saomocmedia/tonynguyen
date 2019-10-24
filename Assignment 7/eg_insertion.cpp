#include <stdio.h>
int main()
{
	int ary[5] = { 23, 90, 9, 25, 16 };
	int temp,i,j;
	//perform insertion sorting
	for (j=1; j<5; j++) {
    i =j - 1;
    temp = ary[j];
    while ( (i>=0) && (temp < ary[i])) {
        ary[i+1] = ary[i];
        i--;
    }
    ary[i+1] = temp;
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n",ary[i] );
	}
	return 0;
}