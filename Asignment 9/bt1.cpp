#include <stdio.h>
int timsonghichdao(int x){  //viet 1 ham tim nghich dao cua 1 so
	int t=0;
	while(x!=0){
		t=t*10+x%10;
		x=x/10; // n/=10;
	}
	return t;//t la so nghich dao tim duoc
}
//n la kich thuoc mang, cach 1
void inmangsonguyen(int ary[], int n){  //viet 1 ham in ra cac gia tri cua 1 mang so nguyen
	for (int i = 0; i < n; ++i)  //cach 1
	{
		printf("%d \n",ary[i] );
	}
}

void inmangsonguyencach2 (int *ary ){
	for (int i = 0; i < sizeof(ary)/sizeof(int) ; ++i)// sizeof: do kich thuoc trong 1 o nho
	{
		printf("%d \n",ary[i] );
	}
}

int main(int argc, char const *argv[])
{
	printf("nghich dao cua 1234 la %d\n",timsonghichdao(1234) );
	printf("nghich dao cua 43211 la %d\n",timsonghichdao(43211) );

	int arr[5] = {3,1,5,6,2}; //cach 1
	// inmangsonguyen(arr,5); //cach 1
	inmangsonguyencach2(arr);

	return 0;
}