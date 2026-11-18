//sum of digits in a number
#include <stdio.h>

int main()
{
    int sum=0,d,n;
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        sum+=d;
        n/=10;
    }
    printf("sum = %d",sum);
}
