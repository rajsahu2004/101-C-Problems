#include<stdio.h>
int main(){
    int i;
    double *pa;
    double a[]={5,10,15,20,25};
    pa=a;
    for(i=0;i<5;i++)
    printf("%.2lf ",*(pa+i));
}