#include <stdio.h>
int main(int argc, char const *argv[])
{
	float sum;
	float interest;
	int year;
	float rate;
	printf("enter a capital sum: \n");
	scanf("%f",&sum);
	printf("enter a interest \n");
	scanf("%f",&interest);
	printf("enter number of year \n");
	scanf("%d",&year);
	interest=interest/100;
	for (int i = 0; i < year; ++i)
	{
		rate=sum*interest;
		sum=sum+rate;
		printf("%d\t %f\t %f\n",i+1,rate,sum);
	}
	return 0;
}