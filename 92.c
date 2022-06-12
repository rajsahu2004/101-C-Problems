#include<stdio.h>
#include<math.h>
void distance(int x1,int x2,int y1,int y2){
    double distance,sq;
    sq=pow((x1-x2),2)+pow((y1-y2),2);
    distance = sqrt(sq);
    printf("Distance is %.2lf",distance);
}
int main(){
    int x1,x2,y1,y2;
    printf("Enter coordinates x1 y1 x2 y2 :");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    distance(x1,x2,y1,y2);
}