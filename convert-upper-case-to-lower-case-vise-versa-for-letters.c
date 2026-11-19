//convert upper case to lower case vise versa for letters in string
#include <stdio.h>

int main()
{
    char arr[100];
    scanf("%[^\n]",&arr);
    char ch;
    for (int i=0;arr[i]!='\0';i++){
        ch= arr[i];
        if(ch>='A' && ch<='Z')
        ch = ch+32;
        else if (ch>='a' && ch<='z')
        ch=ch-32;
        else
        ch= ch;
        printf("%c",ch);
    }
}
