#include<stdio.h>
int main(){
    double f,c;
    printf("Enter the temprature in Celcius  : ");
    scanf("%lf",&c);
    f=c*(9/5)+32;
    printf("Temprature in fahrenheit is %.2lf",f);
}