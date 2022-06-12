#include<stdio.h>
int main(){
    float a[5],b[5],avgA,avgB,sumA=0,sumB=0;
    int i;
    printf("Enter first array of 5 numbers : ");
    for(i=0;i<5;i++){
        scanf("%f",&a[i]);
        sumA+=a[i];
    }
    printf("Enter second array of 5 numbers : ");
    for(i=0;i<5;i++){
        scanf("%f",&b[i]);
        sumB+=b[i];
    }
    avgA=sumA/5.00;
    avgB=sumB/5.00;
    if(avgA>avgB)
        printf("Avg : %.2f -> A",avgA);
    else 
        printf("Avg : %.2f -> B",avgB);
}