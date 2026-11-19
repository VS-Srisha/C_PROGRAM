#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%[^\n]s",&ch);
    int len=strlen(ch);
    printf("%d",len);
    
}