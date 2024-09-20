#include<stdio.h>
void main(){
 int i,a;
 long int b=1;
 printf("Enter the number:");
 scanf("%d",&a);
 for(i=1;i<=a;i++){
    b *=i;
 }
    printf("b is %d",b);
 
}