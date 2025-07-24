#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        ch=ch-32;
        printf("converted character %c\n",ch);
    }
    else if(ch >='A' && ch <='Z'){
        ch=ch+32;
        printf("converted character %c\n",ch);
    }
    else{
        printf("the character is not an alphabet letter\n");
    }
    return 0;
}