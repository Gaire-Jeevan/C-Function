#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a and b:- ");
    scanf("%d %d",&a,&b);
    
    a=a+b;//without using third variable.
    b=a-b;
    a=a-b;
    
    printf("The value of a and after swapping is:- %d %d",a,b);
    return 0;
}
