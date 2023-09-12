/*//HOLLOW  TRIANGLE
//	*
//     * *	
//    * * *	
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int s=1;
	for(int i=1;i<=N;i++)
	{
		if(i==1 || i==N)
		{
			for(int j=1;j<=N-i;j++)
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
			for(int j=1;j<=N-i;j++)
			{
				printf(" ");
			}
			printf("*");
			for(int j=1;j<=s;j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
			s=s+2;
		}
	}
	return 0;
}
*/


//Ulta Hollow triangle
//	* * *
//	 * *
//	  *	
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int s=1;
	for(int i=N;i>0;i--)
	{
		if(i==N  || i==1)
		{
			for(int j=1;j<=s;j++)
			{
				printf(" ");
			}
			for(int j=1;j<=i;j++)
			{
				printf("* ");
			}
			printf("\n");
			s=s+1;
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
