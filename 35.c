#include<stdio.h>
int main(){
    int sum=0;
    for(int i=5;i<=25;i++){
        sum+=i*i;
    }
    printf("Sum of squares of all numbers from 5 to 25 is %d",sum);
}