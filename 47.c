#include<stdio.h>
int main(){
    int a[5];
    printf("Enter 5 integers : ");
    int i,sum=0,count=0;
    double avg;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]>100){
            sum+=a[i];
            count++;
        }
    }
    avg=(double)sum/count;
    printf("Average of integers greater than 100 is %.2lf",avg);
}