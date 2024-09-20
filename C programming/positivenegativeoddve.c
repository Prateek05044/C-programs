#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a,);
    if(a>0){
        printf("The number is positive");
        if(a%2==0){
            printf("the number is even");
            else{
                printf("The number is odd");
            }
        }
    }
    else 
    printf("The number is negative");
}