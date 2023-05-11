#include <stdio.h>
#include <conio.h>
main(){
	int a,b;
	printf("nhap so a:");
	scanf("%d",&a);
	
	printf("nhap so b:");
	scanf("%d",&b);
	
	int tong = a + b ;
	int hieu = a - b ;
	int tich = a*b ;
	float thuong = a/b ;
	
	
	printf("tong=%d\n",tong);
	printf("hieu=%d\n",hieu);
	printf("tich=%d\n",tich);
	printf("thuong=%.2f",thuong);
	
	
	getch();
}
