#include<stdio.h>
void divisors(int a){
    int i;
    for(i=1;i<=a/2;i++)
    if(a%i==0)
    printf("%d ",i);
}
int main(){
    printf("Enter an positive integer : ");
    int a;
    scanf("%d",&a);
    divisors(a);
}