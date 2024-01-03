#include<stdio.h>
int factorial(int n){
	int fact=1;
	for(int i=2;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int n;
	int r;
	printf("Enter 'n' and 'r':- ");
	scanf("%d %d",&n, &r);
	
	int ncr=factorial(n)/(factorial(r)*factorial(n-r));
	printf("the combination of given number is:- %d",ncr);
	return 0;
}
