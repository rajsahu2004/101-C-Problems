#include<stdio.h>
#include<math.h>
void anglesOfTriangle(float a,float b,float c){
    float A,B,C,pi;
    A=(b*b+c*c-a*a)/(2*b*c);
    B=(a*a-b*b+c*c)/(2*a*c);
    C=(a*a+b*b-c*c)/(2*a*b);
    pi=acos(-1);
    A=acos(A)*(180/pi);
    B=acos(B)*(180/pi);
    C=acos(C)*(180/pi);
    printf("Angle A : %f\n",A);
    printf("Angle B : %f\n",B);
    printf("Angle C : %f\n",C);
}
int main(){
    float a,b,c;
    printf("Enter the sides of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    anglesOfTriangle(a,b,c);
}