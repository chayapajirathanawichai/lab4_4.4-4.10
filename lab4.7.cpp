#include<stdio.h>
int main()
{
	int i,j,k,n;
	char a;
	scanf("%c %d %d",&a,&i,&j);
	for(k=1;k<=j;k++)
	{
		for(n=1;n<=i;n++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
	return 0;
}
