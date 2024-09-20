#include<stdio.h>
int main(){
    int a,b;
    int c;
 printf("enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a >= b && a >= c)
        printf("a is the greatest term");
    if(b >= a && b >= c)
    printf("b is the greatest term");
    if(c >= a && c >= b)
    printf("c is the greatest term");
    return 0;
}