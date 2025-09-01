#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {sum=sum+(i*i);}
    printf("The sum of square of %d natural numbers are:%d",n,sum);
    return 0;
}
