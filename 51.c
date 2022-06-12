#include<stdio.h>
int main(){
    int a[5],b[5],ab[5],i;
    printf("Enter 5 integers : ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Again enter 5 integers : ");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
        ab[i]=a[i]+b[i];
    }
    printf("Sum of both array is : ");
    for(i=0;i<5;i++)
    printf("%d ",ab[i]);
}