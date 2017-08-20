#include <stdio.h>
int n=0;
struct node 
{
	int data;
	struct node *link;
}p[100];
void main()
{
	int n,i,sum=0,temp,res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&p[i].data);
		temp=p[i].data;
		p[i].link = &p[i+1];
		do
		{
			sum=(sum*10)+(temp/10);
			temp=temp/10;
		}while(temp);
	}
	res=palindrome(sum);
	printf("%d\n",res);
}

int palindrome(int n)
{
	int temp=n,sum=0;
	while(n)
	{
		sum=sum+n/10;
		n=n/10;
	}
	if (temp==sum)
		return(1);
	else
		return(0);
}
