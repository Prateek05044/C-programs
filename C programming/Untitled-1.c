#include<stdio.h>
void main()
{
    int a,b,result , char 'ch';
    printf("enter the value of a and b");
    scanf("%d%d",&a&b);
    printf("Enter operation");
    scanf("%c",&ch)
    switch(ch){
        case 1:
        result=a+b;
        printf("result is %d",result);
        break;
        case 2:
        result=a-b;
        printf("result is %d",result)
        break;
        case 3:
        result=a*b;
        printf("result is %d",result)
        break;
        case 4:
        result=a/b;
        printf("result is %d",result);
        break;
    }
  

   }
