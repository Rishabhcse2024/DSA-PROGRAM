#include<stdio.h>
int main (){
	int A[7]={10,20,30,40,50,60,70};
	int sum;
	for (int i=0;i<7;i++){
		scanf("%d",&A[i]);
		printf("%d",A[i]);
		sum+=i;
		printf("%d \n",sum);
	}
	return 0;
}
