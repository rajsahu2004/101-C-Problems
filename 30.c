#include<stdio.h>
int main(){
    int sum=0;
    for (int i=100;i>=1;i-=2)
    sum+=i;
    printf("101 + 99 + 97 + ... + 3 + 1 = %d",sum);
}