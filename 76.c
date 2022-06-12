#include<stdio.h>
int main(){
    int a[]={5,10,15,20,25};
    int *pa;
    pa=&a[2];
    printf("%d %d",*pa,*(pa+2));
}