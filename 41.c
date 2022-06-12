#include<stdio.h>
int main(){
    int sum=0,count=0,i;
    double avg; 
    for(i=10;i<=500;i++){
        if(i%60==0){
            sum+=i;
            count++;
        }
    }
    avg=sum/count;
    printf("Sum and average of numbers from 10 to 500 divisible by 3,5 and 12 is %d and %.2lf",sum,avg);
}