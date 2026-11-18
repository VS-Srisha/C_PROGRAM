#include<stdio.h>
int main(){
    int n,col,row;
    scanf("%d",&n);
    for(row=0;row<n;row++,printf("\n")){
        for(col=0;col<n-row-1;col++)
        printf(" ");
        for(col=0;col<=row;col++)
        printf("*");
    }
}