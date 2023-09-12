//rectangle

#include<stdio.h>
int main()
{
	int N,k;
	printf("ENTER THE NUMBER ROWS :- ");
	scanf("%d",&N);
	printf("ENTER THE NUMBER COLUMN:- ");
	scanf("%d",&k);
	for(int i=1;i<=N;i++)
	{
		if(i==1 || i==N)
		{
			for(int j=1;j<=k;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			printf("* ");
			for(int r=1;r<=k-2;r++)
			{
				printf("  ");
			}
			printf("*\n");
		}
	}
	return 0;
	
}
