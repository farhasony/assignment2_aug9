#include<stdio.h>
int main()
{
  int num, sum=0;
  int i;
  for( i=1 ; i<=10; i++)
  {
    
    printf("Enter number: ");
    scanf("%d",&num);

    
    if( num<0 ) // as-ve numbers encountred loop terminates
     break;

    
     sum = sum + num;// calculate sum
  }

  // display result
  printf("Sum = %d",sum);

  return 0;
}
