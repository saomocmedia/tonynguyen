#include <stdio.h>
int binhphuongtong(int a, int b){
	int x =a+b;
	x = x*x;
	return x;
}
int binhphuong (int x){
	return x*x;
}
int songaunhien(){
	return 10;
}
void inramenu(){//viet ra de chay khong can hung gia tri tra ve nhu int
	printf("Tinh binh phuong 20 = %d\n",binhphuong(20) );
	printf("1. Ca\n");
	printf("2. Tom\n");
	printf("3. Ga\n");
}
int main(int argc, char const *argv[])
{
	int a = 10, b = 20;
	//day la noi su dung
	int z = binhphuongtong(a,b);
	printf("z = %d\n",z );
	printf("tong 2 = %d\n",binhphuongtong(15,22) );
	inramenu();
	return 0;
}