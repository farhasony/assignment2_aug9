#include<stdio.h>
int main()
{
	int a=1,b=1,num,result;
	printf("enter value of num=");
	scanf("%d",&num);
	for(a=1;a<=num;a++)
	{
		for(b=1;b<=a;b++)
	        {
			printf("%d\n",a);
			result=a;
			
		}
	}
		if(num==result)
				printf("valid\n");
		else
				printf("invalid\n");
}
