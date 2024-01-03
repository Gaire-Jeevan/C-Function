#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a and b:- ");
    scanf("%d %d",&a,&b);
    
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The value of a and after swapping is:- %d %d",a,b);
    return 0;
}
