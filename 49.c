#include<stdio.h>
int main(){
    int a[3][3],sum=0,i,j;
    double avg;
    printf("Enter 9 integers to fill 3*3 2D array : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    avg=(double)sum/9;
    printf("Average of integers is %.2lf",avg);
}