#include <stdio.h>
#include <stdlib.h>//thư viện cấp phát ô nhớ

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{
	int x = 10, y =20;
	swap(&x,&y);
	int *ary;
	ary = (int *)malloc(5*sizeof(int));//malloc: cấp phát lần đầu tiên cho quản lý 5 ô nhớ
	//có thể dùng calloc(5,sizeof(int)); trước khi đưa ô nhớ sẽ giải phóng ram trước
	//int ary[5];
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",ary+i);
	}
	printf("cac so vua nhap\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n",*(ary+i) );
	}
	ary = (int *)realloc(ary, 8*sizeof(int));//realloc: cấp thêm ô nhớ, thay đổi kích thước của mảng
	for (int i = 5; i < 8; ++i)
	{
		printf("%d\t",*(ary+i)); // \t -> tab
	}
	free(ary);//hoặc: ary = (int *)realloc(ary,0*sizeof(int)); giải phóng ô nhớ
	return 0;
}