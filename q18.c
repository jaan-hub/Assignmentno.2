#include<stdio.h>
int main()
{
   char ch;
   printf("enter a character:");
   scanf("%c",&ch);
   if(ch >=48 && ch <=57){
      printf("the character '%c' is digit.\n",ch);
   }
   if(ch >=65 && ch<=90){
      printf("the character '%c' is uppercase alphabet\n",ch);
   }
   if(ch >=97 && ch <=122){
      printf("the character is '%c'is lowercase alphabet\n",ch);
   }else{
      printf("the character '%c' is neither digit or alphabet\n",ch);
   }
   return 0;
}