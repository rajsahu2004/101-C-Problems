#include<stdio.h>
int main(){
    int n,first=1,second=1;
    printf("Enter an integer n : ");
    scanf("%d",&n);
    while(first<=n){
        printf("%d ",first);
        int temp = first;
        first=second;
        second+=temp;
    }
}