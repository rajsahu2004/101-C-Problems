#include<stdio.h>
int factorial(int n){
    if(n==0)
        return 1;
    else 
        return n*factorial(n-1);
}
long int sumOfFactorial(int a,int b){
    long int sum = factorial(a)+factorial(b);
    printf("Sum of factorial of %d and %d is %ld",a,b,sum);
}
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    sumOfFactorial(a,b);
}