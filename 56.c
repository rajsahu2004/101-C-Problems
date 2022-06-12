#include<stdio.h>
void oddOrEven(int a){
    (a%2==0)?printf("EVEN"):printf("ODD");
}
int main(){
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    oddOrEven(a);
}