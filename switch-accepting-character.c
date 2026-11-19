#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        printf("AIDS");
        break;
        case 'b':
        printf("BUSINESS MANAGEMENT");
        break;
        case 'c':
        printf("CYBER SECURITY");
        break;
        default:
        printf("Invalid Input");
    }
}