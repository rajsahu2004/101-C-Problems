#include<stdio.h>
int main(){
    int a[9]={1,23,10,15,17,21,44,43,53};
    int i,j,count;
    for(i=0;i<9;i++){
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0)
            count++;
        }
        if(count==2)
            printf("%d is a prime number\n",a[i]);
            count=0;
    }
}