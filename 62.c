#include<stdio.h>
void areaOfFlag(float a){
    printf("%.2f",a*a*2/3);
}
int main(){
    float a;
    printf("Enter the length of flag : ");
    scanf("%f",&a);
    areaOfFlag(a);
}