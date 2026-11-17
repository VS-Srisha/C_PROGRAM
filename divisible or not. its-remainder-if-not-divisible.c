//WHETHER THE NO. IS DIVISIBLE OR NOT . if not display remainder
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if ((a%3)==0)
    printf("Number %d is divisible by 3",a);
    else
    printf("Number %d is not divisible by 3. Remainder is %d",a,a%3);
}
