#include<stdio.h>
int main(){
    int a[]={-99,45,100,37,89,-327,245};
    int i,max=0,index;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]>=max)
        max=a[i];
        index=i;
    }
    printf("Largest integer is %d and its index is %d",max,index);
}