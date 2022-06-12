#include<stdio.h>
void numberOfDays(float n){
    int count=0;
    while(n>=1){
        n/=2;
        count++;
    }
    printf("Result is %d days",count);
}
int main(){
    float n;
    printf("Enter the dog's food in Kg :  ");
    scanf("%f",&n);
    numberOfDays(n);
}