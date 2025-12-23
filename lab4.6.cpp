#include<stdio.h>
int main()
{
	int a,i,j,k;
	scanf("%d %d",&a,&j); 
	for(k=1;k<=j;k++)
	{
		for(i=1;i<=j;i++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}
