#include<stdio.h>
#include<string.h>
int main(){
    char str1[3]="We";
    char str2[6]=" love";
    char str3[7]=" India";
    char str4[30];
    int length,i,j=0,k;
    for(i=0;i<strlen(str1);i++)
        str4[j++]=str1[i];
    for(i=0;i<strlen(str2);i++)
        str4[j++]=str2[i];
    for(i=0;i<strlen(str3);i++)
        str4[j++]=str3[i];
    str4[j]='\0';
    printf("%s",str4);
}