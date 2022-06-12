#include<stdio.h>
int main(){
    printf("Enter a letter :");
    char a;
    scanf("%c",&a);
    if(a=='x'||a=='y'||a=='z'||a=='X'||a=='Y'||a=='Z')
    printf("%c",a-23);
    else 
    printf("%c",a+3);
}