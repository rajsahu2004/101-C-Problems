#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int length,i;
    printf("Enter a string : ");
    scanf("%s",str);
    length=strlen(str);
    for(i=length;i>=0;i--)
    printf("%c",str[i]);
}
