#include<stdio.h>
void gcd(int a,int b){
    int i,gcd;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    printf("GCD od %d and %d is %d",a,b,gcd);
}
int main(){
    int a,b;
    printf("Enter two integers : ");
    scanf("%d%d",&a,&b);
    gcd(a,b);
}