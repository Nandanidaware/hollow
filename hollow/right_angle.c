/*//Hollow Right Angled Triangle before space
#include<stdio.h>
int main()
{
	int N,i;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=0;
	for(int i=N;i>0;i--)
	{
		if(i==N || i==1)
		{
			for(int j=1;j<=k;j++)
			{
				printf(" ");
			}
			for(int j=1;j<=i;j++)
			{
				printf("* ");
			}
			printf("\n");
			k=k+2;
		}
		else
		{
			int p=2*i-3;
			for(int j=1;j<=k;j++)
			{
				printf(" ");
			}
			printf("*");
			for(int j=1;j<=p;j++)
			{
				printf(" ");
			}
			printf("*");
			k=k+2;
			printf("\n");
		}
	}
	return 0;
}



//SIDHA RIGHT ANGLED TRIANGLE

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=1;
	for(int i=1;i<=N;i++)
	{
		if(i==1 || i==N)
		{
			for(int j=1;j<=i;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			printf("*");
			for(int j=1;j<=k;j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
			k=k+2;
		}
	}
	return 0;
}



//RIGHT ANGLED TRIANGLE AFTER SPACE

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		if(i==1 || i==N)
		{
			for(int j=1;j<=i;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			printf("* ");
			int p=(2*i)-3;
			for(int j=1;j<=p;j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}
	return 0;
}
*/

//Right Angle before space
#include<stdio.h>
int main()
{
	int N,i;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int s=0;
	for(int i=1;i<=N;i++)
	{
		int p=(N-i)*2;
		if(i==1 || i==N)
		{
			for(int j=1;j<=p;j++)
			{
				printf(" ");
			}
			for(int j=1;j<=i;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			for(int j=1;j<=p;j++)
			{
				printf(" ");
			}
			printf("* ");
			for(int j=1;j<=s;j++)
			{
				printf(" ");
			}
			s=s+2;
			printf("*\n");
		}
	}
	return 0;
}
































