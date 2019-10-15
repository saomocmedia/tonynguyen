#include <stdio.h>
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		printf("bat dau vong i= %d\n",i);
		for (int j = 0; j < 5; ++j)/*j luôn nhỏ hơn i*/
		{
			printf("bat dau vong j = %d\n",j );
		}
		printf("ket thuc vong i = %d\n", i);
	}
	return 0;
}