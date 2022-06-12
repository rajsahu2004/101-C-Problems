#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,length;
    printf("Enter a string : ");
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++){
        if(a[i]>='a'&& a[i]<='z')
        a[i]=a[i]+'A'-'a';
        else if(a[i]>='A'&& a[i]<='Z')
        a[i]=a[i]+'a'-'A';
    }
    puts(a);
}