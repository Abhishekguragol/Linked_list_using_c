#include <stdio.h>
#include <string.h>
int main()
{
	int i,cl=0,op=0;
	char c[100];
	printf("Enter the paranthesis expression:\n");
	scanf("%s",c);
	for(i=0;c[i]!=NULL;i++)
	{
		if(c[i]=='}')
		cl++;
		else if(c[i]=='{')
		op++;
	}
	if(op==cl)
	printf("Valid parenthesis expression\n");
	else
	printf("Invalid parenthesis expression\n");
	return (0);
}
