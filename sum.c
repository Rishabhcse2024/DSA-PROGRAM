#include<stdio.h>
int main (){ 
	int n,i;
	int add=0;
  printf("Enter number of element");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d number: \n",n);
      for(i=0;i<n;i++){
      	scanf("%d",&a[i]);
      	sum+=a[i];
	  }
	  printf("the sum of elements is %d",sum);
	  return 0;
  }
  
	

