#include<stdio.h>
void dollartoINR(float a){
    printf("Money in equal to Rs %.2f",a*77.49);
}
int main(){
    float a;
    printf("Enter money in dollar : ");
    scanf("%f",&a);
    dollartoINR(a);
}