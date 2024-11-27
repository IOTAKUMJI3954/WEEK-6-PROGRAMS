#include<stdio.h>
int main()
{
	int n=5;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<i;k++)
		printf("  ");
		for(int j=5;j>i;j--)
		printf("* ");
		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n-i-1;k++)
		printf("  ");
		for(int j=0;j<i+1;j++)
		printf("* ");
		printf("\n");
	}
	return 0;
}