#include<stdio.h>
int main()
{
int i=0,j,n=5,s,k;
	while(++i<=n)
	{
		for(k=1;k<=n-i;++k)
		{
			printf(" ");
		}
	printf("/");
	j=i;
	while(j!=1)
	{
		j--;
		printf(" ");
	}
	//printf(" ");
	printf(" \\\n ");
	printf("\n");
	}	
}

