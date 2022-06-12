#include<stdio.h>
int main(){
    int*pX,*pY;
    int X=100,Y=200;
    pX=&X;
    pY=&Y;
    printf("X = %d\nY = %d",*pX,*pY);
}