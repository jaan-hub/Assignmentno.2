#include<stdio.h>
int main()
{
    int marks1,marks2,marks3,total;
    float avg;
    printf("Enter marks of 3 subjects:\n");
    scanf("%d%d%d",&marks1,&marks2,&marks3);
    total=marks1+marks2+marks3;
    avg=total/3;
    printf("Total marks is:%d\n",total);
    printf("avg is %.2f%%\n",avg);
    if(avg>=85){
    printf("The First class\n");
    }
    else if(avg>=65){
    printf("The second class\n");
    }
    else if(avg>=35){
        printf("Pass\n");
    }
    else
    printf("Fail");
return 0;

}