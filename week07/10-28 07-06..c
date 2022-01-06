#include <stdio.h>
int main()
{
	float a,b,sum=0;
	float c;
	scanf("%f" ,&a);
	for(int n=1;n<=a;n++)
	{
		scanf("%f" ,&b);
		sum=sum+b;
	}
	printf("%.2f",c=sum/a);
}
