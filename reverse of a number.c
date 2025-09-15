#include<stdio.h>
void main()
{
	int n,rev=0,digit,temp;
	
	printf("Enter a number:");
	
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	printf("The reverse of %d is %d",temp,rev);
}

