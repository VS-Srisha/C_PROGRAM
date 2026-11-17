//prime no. or not
#include <stdio.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    if (n==1){
        printf("Neither prime nor Composite number");
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            c++;
            printf("Not a prime number");
            break;
        }
    }
    if (c==0)
    printf("Number is a Prime number");
}
