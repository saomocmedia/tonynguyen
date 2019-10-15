#include <stdio.h>//Tạo menu lựa chọn ( của nhà hàng) để khách hàng chọn chức năng, sau khi chọn xong quay lại menu để chọn tiếp.
int main()
{
	int lc;
	int lc2,lc3,lc4,lc5;
	printf("******************************************NHAP LUA CHON CUA BAN**********************************************\n");
	printf("1. Goi mon ga \n");
	printf("2. Goi do uong \n");
	printf("3. Goi trang mieng \n");
	printf("4. QUIT \n");
	scanf("%d",&lc);
	switch(lc)
	{
		case 1: printf("******Cac mon ga la: *********\n"); 
				printf("1.Ga rang \n2.Ga luoc\n3.Ga quay\n4.Quit\n");
				do{
					printf("Nhap lua chon cua ban: \n");
					scanf("%d",&lc2);
					if(lc2 ==1 )         printf("Ban chon ga rang.\n");
					else if(lc2 == 2)    printf("Ban chon ga luoc\n");
					else if(lc2 == 3)    printf("Ban chon ga quay\n");
					else 			     printf("Ban chon thoat.\n");
				}
				while(lc2 >=1 && lc2 < 4);
				break;	
		case 2: printf("******Cac loai do uong la: *********\n"); 
				printf("1.COCACOLA \n2.PEPSI\n3.SEVEN UP\n4.Quit\n");
				do{
					printf("Nhap lua chon cua ban: \n");
					scanf("%d",&lc3);
					if(lc3 ==1 ) printf("Ban chon COCACOLA.\n");
					else if(lc3 == 2) printf("Ban chon PEPSI\n");
					else if(lc3 == 3) printf("Ban chon SEVEN UP\n");
					else printf("Ban chon thoat.\n");
				}
				while(lc3 >=1 && lc3 < 4);
				break;
		case 3: printf("******Cac mon trang mieng la: *********\n"); 
				printf("1.Dua + Buoi \n2.Tao + Xoai\n3.Hoa qua cac loai\n4.Quit\n");
				do{
					printf("Nhap lua chon cua ban: \n");
					scanf("%d",&lc4);
					if(lc4 ==1 ) printf("Ban chon Dua + Buoi.\n");
					else if(lc4 == 2) printf("Ban chon Tao + Xoai\n");
					else if(lc4 == 3) printf("Ban chon Hoa qua cac loai\n");
					else printf("Ban chon thoat.\n");
				}
				while(lc4 >=1 && lc4 < 4);
				break;
		case 4: break;
	}
	return 0;
}