#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    printf("Enter a word : ");
    scanf("%s",c);
    int i,length=strlen(c)-1;
    for(i=0;i<length/2;i++)
    if(c[i]==c[length-i]){
    printf("Yes, it is a palindrome");
    break;
    }
    else{
    printf("No,it is not a palindrome");
    break;
    }
}