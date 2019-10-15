#include <stdio.h>
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 10; ++i)
	{
		printf("bat dau vong %d\n",i );
		if(i==5){
			continue; /*nhảy lượt*/
		}
		printf("ket thuc vong%d\n",i );
	}
	return 0;
}