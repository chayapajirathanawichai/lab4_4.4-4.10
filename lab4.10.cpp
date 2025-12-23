#include<stdio.h>
int main()
{
	int score,i,a=0,b=0,c=0,d=0,f=0;
	for(i=1;i>=0;i++)
	{
		scanf("%d",&score);
		if (score==-1)
		{
			break;
		}
		if ((score>=0)&&(score<=100))
		{
			if (score>=85)
			{
				printf("%d (A)",score);
				a+=1;
			}
			else if (score>=75)
			{
				printf("%d (B)",score);
				b+=1;
			}
			else if (score>=68)
			{
				printf("%d (C)",score);
				c+=1;
			}
			else if (score>=55)
			{
				printf("%d (D)",score);
				d+=1;
			}
			else
			{
				printf("%d (F)",score);
				f+=1;
			}
		}
		else
		{
			printf("error score");
		}
		printf("\n");
	}
	printf("A(%d)\n",a);
	printf("B(%d)\n",b);
	printf("C(%d)\n",c);
	printf("D(%d)\n",d);
	printf("F(%d)",f);
	return 0;
}
