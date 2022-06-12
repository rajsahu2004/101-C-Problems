#include<stdio.h>
int main(){
    int x,y,z,max;
    printf("Enter 3 integers : ");
    scanf("%d%d%d",&x,&y,&z);
    max=x;
    if(y>=max)
        max=y;
    if(z>=max)
        max=z;
    printf("Largest of the 3 is %d",max);
}