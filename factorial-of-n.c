//factorial of the given no.s
#include <stdio.h>

int main()
{
    int fact=1,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("Factorial of %d = %d",n,fact);
}
