#include<stdio.h>
#include<stdlib.h>
int main(){
	float top,bottom,height,s;
	printf("top:");
	scanf("%f",&top);
	
	printf("bottom:");
	scanf("%f",&bottom);
	
	printf("height:");
	scanf("%f",&height);
	
	s=(top*bottom)*height/2;
    printf("s= %.f",s);
    return 0;
}
