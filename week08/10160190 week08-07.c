#include <stdio.h>
int main()
{
   int i,n;
   printf("�п�J�j�p:\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
   		for(int j=1;j<=i;j++)
   		{
   			printf(" ");
   		}
   		for(int x=1;x<=n;x++)
   		{
   			printf("*");
   		}
   		printf("\n");
   	}
}

