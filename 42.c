#include<stdio.h>
int main(){
    int i,j,k,l;
    for(i=1;i<=6;i++){
        k=i;
        for(j=1;j<=i;j++){
            l=j*k;
            printf("%d ",l);
        }
            printf("\n");
    }
}