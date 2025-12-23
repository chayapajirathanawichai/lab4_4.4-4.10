#include<stdio.h>
int main()
{
	int score,i;
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
			}
			else if (score>=75)
			{
				printf("%d (B)",score);
			}
			else if (score>=68)
			{
				printf("%d (C)",score);
			}
			else if (score>=55)
			{
				printf("%d (D)",score);
			}
			else
			{
				printf("%d (F)",score);
			}
		}
		else
		{
			printf("error score");
		}
		printf("\n");
	}
	return 0;
}
