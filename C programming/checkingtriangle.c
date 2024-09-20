#include<stdio.h>
int main(){
 int a=7 ,b=4,c=10;
 if (a+b>c && b+c>a &&c+a>b){
     printf("It is a triangle");
 }
 else{
     printf("It is not a triangle");
     }
}