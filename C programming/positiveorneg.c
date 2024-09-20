#include<stdio.h>
void main(){
    int a;
    printf("enter the numbers:");
    scanf("%d",&a);
    if(a>>0){
        printf("It is a positive number");
    }
    else if(a<<0){
        printf("It is a negative number");
    }
}