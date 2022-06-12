#include<stdio.h>
int main(){
    int x;
    printf("Enter your rank : ");
    scanf("%d",&x);
    switch(x){
        case 1 : 
        printf("Your Salary : 2,50,000 BDT");
        break;
        case 2 : 
        printf("Your Salary : 2,10,000 BDT");
        break;
        case 3 : 
        printf("Your Salary : 1,50,000 BDT");
        break;
        case 4 : 
        printf("Your Salary : 80,000 BDT");
        break;
        default : 
        printf("Your Salary : 50,000 BDT");
    }
}