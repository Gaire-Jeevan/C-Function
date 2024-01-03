#include<stdio.h>
int main(){
    int a=24;
    int* x=&a; // store the address of a
    *x=25;//update the value of a with the help of pointer
    int**y=&x; // store the address of pointer x
    
    printf("%p\n",x); //print value stored in x
    printf("%p\n",&x); //print the address of x
    printf("%d\n",a);
    printf("%d\n",*x); //print the value which address is stored in x
    printf("%d",**y);
    
    return 0;
}
