#include<stdio.h>
void findMax(float a,float b,float c){
    float max;
    max=a;
    if(b>=max)
        max=b;
    if(c>=max)
        max=c;
    printf("Largest number is %.2f",max);
}
int main(){
    float a,b,c;
    printf("Enter three numbers : ");
    scanf("%f%f%f",&a,&b,&c);
    findMax(a,b,c);
}