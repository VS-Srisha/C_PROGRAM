#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",&ch);
    int i,c=0;
    for(i=0;ch[i]!='\0';i++)
    c++;
    printf("length of the string %d",c);
    
}