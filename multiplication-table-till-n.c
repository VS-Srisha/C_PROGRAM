//multiplication table of a number from user 
#include <stdio.h>

int main()
{
    int m_n,n;
    scanf("%d%d",&m_n,&n);
    for(int i=1;i<=n;i++)
    printf("%d * %d = %d\n",i,m_n,i*m_n);
}