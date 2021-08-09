#include <stdio.h>  
  
int main()  
{  
   double n1, n2;  
    char choice;  
    
    printf("Enter your choice\n");  
    scanf("%c", &choice);  
  
    printf("a. Addition\n s.Subtraction\n");  
    printf("Enter 2 double numbers\n");  
    scanf("%lf %lf", &n1, &n2);  
  
    
  
    switch(choice)  
    {  
        case 'a': printf("add = %lf\n", (n1+n2));  
                break;  
  
        case 's': printf("sub = %lf\n", (n1-n2));  
                break;  
    
  
        default: printf("No action");  
                 break;  
    }  
  
}
