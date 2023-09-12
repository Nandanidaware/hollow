//HOLLOW SQUARE
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER :- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		if(i==1 || i==N)
		{
			for(int j=1;j<=N;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			for(int j=1;j<=N;j++)
			{
				if(j==1 || j==N)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
}
