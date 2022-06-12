#include<stdio.h>
int main(){
    float x,y;
    printf("Enter the coordinates : ");
    scanf("%f%f",&x,&y);
    if(x==0 && y==0)
    printf("Origin");
    else if(x==0 && y!=0)
    printf("x axis");
    else if(x!=0 && y==0)
    printf("y axis");
    else if(x>0 && y>0)
    printf("First Quadrant");
    else if(x<0 && y>0)
    printf("Second Quadrant");
    else if(x<0 && y<0)
    printf("Third Quadrant");
    else if(x>0 && y<0)
    printf("Fourth Quadrant");
}