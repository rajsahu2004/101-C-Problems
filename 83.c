#include<stdio.h>
struct TanisBall{
    char color[20];
    float weight;
};
int main(){
    struct TanisBall ball,*myBall;
    printf("Enter the weight of ball : ");
    scanf("%f",&ball.weight);
    printf("Enter the color of the ball : ");
    scanf("%s",&ball.color);
    myBall=&ball;
    printf("Weight : %.2f\n",myBall->weight);
    printf("Color : %s",myBall->color);
}