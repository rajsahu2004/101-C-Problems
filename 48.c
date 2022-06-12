#include<stdio.h>
int main(){
    int a[5],i,sumEven=0,sumOdd=0;
    printf("Enter 5 integers : ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        (a[i]%2==0)?(sumEven+=a[i]):(sumOdd+=a[i]);
    }
    printf("Sum of odd values : %d\nSum of even values : %d",sumOdd,sumEven);
}