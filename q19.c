#include<stdio.h>
int main()
{
    int days;
    float fine;
    printf("enter returned date of book late");
    scanf("%d",&days);
    if(days<=0){
        fine=0;
        printf("no fine\n");
    }
    else if(days<=5){
        fine=days*3.0;
    }
    else if(days<=10){
        fine=days*5.50;
    }
    else{
        fine=days*10.0;
    }
    if(days>0){
        printf("the fine is:%2f\n",fine);
    }
    return 0;
}