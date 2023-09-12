//HOLLOW DIAMOND
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE  NUMBER:- ");
	scanf("%d",&N);
	int i;
	int m=1;
	for(int i=1;i<=N;i++)
	{
		if(i==1)
		{
			for(int j=1;j<=N-i;j++)
			{
				printf(" ");
			}
			printf("* ");
			printf("\n");
		}
		else
		{
			for(int j=1;j<=N-i;j++)
			{
				printf(" ");
			}
			printf("*");
			for(int j=1;j<=m;j++)
			{
		       		printf(" ");
			}
			printf("* ");
			printf("\n");
			m=m+2;
		}
	}
	i=N-1;
	int s=1;
	for(int i=N-1;i>0;i--)
	{
		if (i==1)
		{
			for(int j=1;j<=s;j++)
			{
				printf(" ");
			}
			printf("*");
		}
		else
		{
			for(int j=1;j<=s;j++)
			{
				printf(" ");
			}
			printf("*");
			for(int j=1;j<=2*i-3;j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
			s=s+1;
		}
	}
	return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

