#include<stdio.h>
#include<string.h>
#define SIZE 10
struct book
	{
		char name[20];
		int bno,price;
	};
struct stack
	{
		struct book b[10];
		int top;
	};
void push(struct stack *p,struct book b);
struct book pop(struct stack *p);
void main()
{
	struct book b1,b2,b;
	struct stack p;
	int c,i;
	p.top=-1;
	printf(" enter the choice\n");
	printf("\n1.push\n2.pop\n3.display\n4.quit");
	do{
	scanf("%d",&c);
	switch(c)
	{
		case 1:printf(" enter the book details\n");
			scanf("%s%d%d",b.name,&b.bno,&b.price);
			push(&p,b);
			break;
		case 2:b2=pop(&p);
			printf("book no=%d\n book name=%s\n book price=%d\n",b2.bno,b2.name,b2.price);
			break;
		case 3: if(p.top==-1)
			printf(" stack is empty\n");
			else
			printf(" stack contain some elements\n");
			break;
		case 4:printf(" quitting the stack\n");
		       break;
		default:printf(" not found\n");
	}}while(c!=4);
}
void push(struct stack *p,struct book b)
{
	struct book b1;
	if(p->top==SIZE-1)
	{
		printf(" stack is overflow\n");
		return;
	}
	else
	{
	  	++(p->top);
		p->b[p->top].bno=b1.bno;
		strcpy(p->b[p->top].name,b1.name);
		p->b[p->top].price=b1.price;
	}
}
struct book pop(struct stack *p)
{
	struct book b2;
	if(p->top==-1)
	{
		printf(" stack is under flow\n");
 		return;
	}
	else
	{

		p->b[p->top].bno=b2.bno;
		strcpy(p->b[p->top].name,b2.name);
		p->b[p->top].price=b2.price;
		(p->top)--;
		return b2;
	}
}
		
		
