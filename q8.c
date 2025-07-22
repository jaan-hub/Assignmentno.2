#include<stdio.h>
int main()
{
    char ch;
    printf("Enter lowercase character:");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o' || ch=='u')
        printf("character is vowel ",ch);
    else
        printf("character is consonant\n");
    return 0;
}