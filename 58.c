#include<stdio.h>
float add(float a, float b){
    printf("Sum = %.2f\n",a+b);
}
float subtract(float a, float b){
    printf("Difference = %.2f\n",a-b);
}
float multiply(float a, float b){
    printf("Product = %.2f\n",a*b);
}
float divide(float a, float b){
    printf("Division = %.2f\n",a/b);
}
int main(){
    float a,b;
    printf("Enter two numbers : ");
    scanf("%f%f",&a,&b);
    add(a,b);
    subtract(a,b);
    multiply(a,b);
    divide(a,b);
}