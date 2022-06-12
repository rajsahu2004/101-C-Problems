#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    int i=0,length=0;
    while(1){
        if(str[i]=='\0')
        break;
        else {
            i++;
            length++;
        }
    }
        printf("%d",length);
}