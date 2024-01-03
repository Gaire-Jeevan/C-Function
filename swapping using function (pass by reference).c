#include<stdio.h>
void swap(int* x, int*y){//contains the container which hold the addresses of the variable
    int temp;
    temp = *x; // let temp=2
    *x=*y; // value change a=9
    *y=temp; // *y = 2 -> b=2;
    
}
int main(){
    int a, b;
    printf("enter the value of a and b:- ");//let a=2 and b=9
    scanf("%d %d",&a,&b);
    
    swap(&a,&b);
    printf("the value of a and b after swapping is:- %d %d",a,b);
    return 0;
}
