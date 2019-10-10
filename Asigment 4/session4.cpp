#include <stdio.h>
int main()
{
	int x=0;
	while(x>0){
		printf("day la printf trong while\n");
	}
	do{
		printf("day la print trong do ... while\n");
	}while(x>0);
	for (int i = 0; i < 10; ++i)
	{
		printf("day la vong lap for...\n");
	}
	for (;x<4;)
	{
		x++;
		printf("x = %d\n",x );
	}
	return 0;
}