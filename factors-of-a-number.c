//print the factors of a number
#include <stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    printf("Factors of %d = ",n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
        printf("%d ",i);
    }
    //to reduce the iterations (by half) we can divide n during ending statement in for loop
    printf("%d",n);
}
