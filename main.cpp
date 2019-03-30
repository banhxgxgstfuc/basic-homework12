#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(void) 
{
	int m;
	int n,j,i,k;
	printf("請輸入一個數字:");
	scanf("%d",&m);
	
	n=m;
	for(i=1;i<=n;i++)
	{
    for(j=m;j<n;j++)
	printf(" ");
	for(k=1;k<=m;k++)
	printf("*");
     printf("\n");
	m--;
    }
system("pause");
return 0;
}

