#include<stdio.h>
void sumOfTwo(int a,int b){
    int sum;
    sum=a+b;
    printf("Sum is %d",sum);
}
int main(){
    printf("Enter two integers : ");
    int a,b;
    scanf("%D%D",&a,&b);
    sumOfTwo(a,b);
}