#include<stdio.h>
void absoluteValue(float a){
    (a<0)?printf("Absolute value of %.2f is %.2f",a,a*(-1)):printf("Absolute value of %.2f is %.2f",a,a);
}
int main(){
    float a;
    printf("Enter any real number : ");
    scanf("%f",&a);
    absoluteValue(a);
}