#include<stdio.h>
void main()
{
	int marks[50],i,m,n;
	marks[0]=1;
	printf("Original array:\n");
	for(i=0;i<50;i++)
	{
		printf("%d\n",marks[i]);
		marks[i+1]=marks[i]+1;
	}
 	printf("\nEnter the position of array you want to insert the marks:");
 	scanf("%d",&n);
 	printf("Enter the new marks:");
 	scanf("%d",&m);
 	for(i=51;i>=n;i--)
 	{
 		
 		marks[i]=marks[i-1];
 	}
 	
 	marks[n]=m;
 	
 	printf("The updated array:\n");
 	for(i=0;i<51;i++)
 	{
 		printf("%d\n",marks[i]);
	 }
}

