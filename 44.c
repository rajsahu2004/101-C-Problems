#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    printf("Enter 10 integers : ");
    for(i=0;i<10;i++){
            scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum of integers is %d",sum);
}