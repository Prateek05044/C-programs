#include<stdio.h>
int main(){
    int a;
    printf("enter the numebr:");
    scanf("%d",&a);
    if(a%55==0){
        printf("It is divisible by 55");
    }
    else{
        printf("It is not divisibke by 55");
    }
    return 0;
}