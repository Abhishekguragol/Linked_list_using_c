#include <stdio.h>
int n=0;
struct node 
{
	int data;
	struct node *link;
}p[100];

void main()
{
	int i=0,ch=1,min;
	struct node ** ptr;
	printf("Enter the value\n");
	scanf("%d",&p[0].data);
	p[0].link = &p[1];
	n++;
	printf("Do you want to add another node? Type:\n1) for Yes\n2) For No\n");
	scanf("%d",&ch);
	while(ch==1)
	{
	p[n-1].link = &(p[n]);
	ptr=&(p[n-1].link);
	if(ch==1)
	{
		printf("Enter the value\n");
		append(ptr,n);
		n++;
	}
	printf("Do you want to add another node? Type:\n1) for Yes\n2) For No\n");
	scanf("%d",&ch);
	}
	display(&p[0]);
	min=findmin(&p[0]);
	printf("The minimum element in the list is:\n%d\n",min);
}

void append(struct node ** a, int n)
{
	struct node * p;
	p=*a;

	scanf("%d",&p->data);
}
void display(struct node *a)
{
	int i;
	printf("The elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",(a+i)->data);
	}
	printf("\n");
}
int findmin(struct node *a)
{
	int m=a->data,i;
	for(i=0;i<n;i++)
	{
		if((a+i)->data<m)
			m=(a+i)->data;
			
	}
	return(m);	
}
	
	
