#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printstar(char,int) ;
int main(void) 
{
	printstar('*',5);
	printstar('*',4);
	printstar('*',3);
	printstar('*',2);
	printstar('*',1);

	return 0;
}
void printstar(char star,int num)
{
	int i,j,k;
	for(k=0;k<num;k++)
	{
	 for(i=5;i>num;i--)
      printf(" ");
     for(j=0;j<num;j++)
	  printf("%c",star);
	  printf("\n");
	 return;
    }
}
