#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d", &marks);
    if(marks>=80){
        printf("A");
    }
    else if(marks>=60 && marks<80){
        printf("B");
    }
    else if(marks>=40 && marks<60){
        printf("C");
    }
    else if(marks<40){
        printf("A+");
    }
    else
    printf("not an valid input");
    return 0;
}