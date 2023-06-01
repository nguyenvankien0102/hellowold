#include <stdio.h>
#include <stdlib.h>
int isEvenNumber(int a);
int main() {
	
    int n,m;
    printf("nhap 2 so \n n: ");
    scanf("%d",&n);
    
	printf(" m: ");
    scanf("%d",&m);
    
	printf("so chan chay tu %d and %d:\n",n,m);
    for(int i=n+1;i<m;i++)
    {
        if(isEvenNumber(i)==1)
            printf("%d\n",i);
    }
    return 0;
}
int isEvenNumber(int a)
{
if(a%2==0)
    return 1;
else
    return 0;
}
