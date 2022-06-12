#include<stdio.h>
int main(){
    int x;
    printf("Enter the integer : ");
    scanf("%d",&x);
    if(x%3==0 && x%5 ==0)
    printf("Yes");
    else 
    printf("No");
}