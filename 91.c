#include<stdio.h>
void isPrime(int n){
    int i,flag=0;
    for(i=2;i*i<=n;i++){
    if(n%i==0){
        flag=1;
        break;
    }
    }
    if(flag==0)
    printf("yes");
    else 
    printf("no");
}
int main(){
    int n;
    printf("enter an natural number : ");
    scanf("%d",&n);
    isPrime(n);
}