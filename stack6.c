#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *link;	
};
void push(int);
int pop();
int peek();
struct stack *top=NULL;
int main()
{
	int ch,val;
	while(1)
	{
		printf("1.push 2.pop 3.peek 4.exit\n");
		printf("enter ur choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter val\n");
			         scanf("%d",&val);
			         push(val);
			         break;
			case 2: if(top==NULL)			  
			         	printf("stack is empty\n");
			         else	 
			         	printf("data poped is %d\n",pop()); 
			         break;
		        case 3: if(top==NULL)
			         	printf("stack is empty\n");
			         else	 
			         printf("top of stack is pointing to %d\n",peek());
			         break;
			case 4: exit(0);
			         break;		         
		}	
	}
}
 void push(int val)
 {
 	struct stack *temp=NULL;
 	temp=calloc(1,sizeof(struct stack));
 	if(temp==NULL)
 		printf("stack is full\n");
	 else
	 {
	 	temp->data=val;
	 	temp->link=top;
	 	top=temp;	
	 }
}	
 int pop()
 {
 	int val;
 	struct stack *temp=NULL;
 	temp=top;
 	val=temp->data;
 	top=top->link;
 	free(temp);
 	temp=NULL;
 	return val;
 }
 int peek()
 {
 	return top->data;
 }

