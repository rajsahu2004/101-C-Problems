#include<stdio.h>
int main(){
    int VAR=500;
    int *ptr;
    ptr=&VAR;
    int *pptr;
    pptr=ptr;
    printf("%d\n%d\n%d",VAR,*ptr,*pptr);
}