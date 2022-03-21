
// stacks are based  the principal LIFO
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node *link;
	
	 
};
struct node *top=0;
struct node *temp;
void push()
{int x;
printf("enter data \n");
scanf("%d",&x);
	struct node *newnode;
	newnode =(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->link= top;
	top= newnode;
	
	
}
void display()
{
	
	temp=top;
	if(top==0)
	printf("stack is empty \n");
	else
	{
		while(temp!=0)
		{
			printf("%d", temp->data);
			temp=temp->link;
		}
	}
}
void peek()
{
	if(top==0)
	printf("It is empty \n");
	else
	printf("Top element is %d \n",temp->data);
	
}
void pop()
{

	temp=top;
	if(top==0)
	printf("Underflow");
	else
	{
		printf("The poped element is %d \n",top->data);
		top=top->link;
	}
}
int main()
{
	int ch;
	
	do
	{
		printf(" Enter choice: 1 push, 2 pop, 3 peek, 4 display \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: peek();
			break;
			case 4: display();
			break;
			default: printf("Invalid choice \n");
			
		}
		}
		while(ch!=0);
		
	
	
} 




