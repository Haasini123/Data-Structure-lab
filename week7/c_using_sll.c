#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*f=NULL,*r=NULL,*cur;
void enqueue()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data to insert\n");
	scanf("%d",&(cur->data));
	if(f==NULL)
	{
		cur->link=cur;
		f=r=cur;
	}
	else
	{
		r->link=cur;
		cur->link=f;
		r=cur;
	}
}
void dequeue()
{
	if(f==NULL)
		printf("cqueue underflow\n");
	else if(f==r)
	{
		printf("Deleted data is %d\n",f->data);
		f=r=NULL;
	}
	else
	{
		cur=f;
		f=f->link;
		r->link=f;
		printf("deleted data is %d\n",cur->data);
		free(cur);
	}
}
void display()
{
	if(f==NULL)
		printf("cqueue is empty\n");
	else
	{
		cur=f;
		while(cur->link!=f)
		{
		printf("%d->",cur->data);
		cur=cur->link;
		}
		printf("%d->",cur->data);
	}
}
int main()
{
	int ch;
	while(1)
	{
	printf("\n1-enquene\n2-dequene\ndisplay\n4-exit\n");
	printf("Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: enqueue();
		break;
	case 2: dequeue();
		break;
	case 3: display();
		break;
	case 4: exit(0);
	}
	}
	return 0;
}
