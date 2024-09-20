#include<stdio.h>
void main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%4==0){
        printf("It is a leap year");
    }
    else {
        printf("It is not a leap year");
    }
}