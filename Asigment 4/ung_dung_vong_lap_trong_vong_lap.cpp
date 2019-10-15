#include <stdio.h>
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < i; ++j)/*j luôn nhỏ hơn i*/
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}